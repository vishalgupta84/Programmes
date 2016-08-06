from whoosh.index import create_in
from whoosh.fields import *
import web


import whoosh
from whoosh.index import create_in
from whoosh.fields import *
from bs4 import BeautifulSoup
import string
import sys,urllib2,urllib
from whoosh.qparser import QueryParser



urls = [
  '/hello','Index'
]
render = web.template.render('templates/')


def search(data):
	array =[]
	'''array = []
	with open("links.txt", "r") as ins:
		for line in ins:
			if data in line:
				array.append(str(line))
	'''
	#return "\n".join(array)
	fp= open('solution.txt','w')
	schema = Schema(title=TEXT(stored=True), path=ID(stored=True), content=TEXT)
	ix = create_in("test", schema)
	writer = ix.writer()
	with open("links.txt", "r") as ins:
		for line in ins:
			url = line
			if data in line:
				writer.add_document(title=unicode(url,"utf-8"),path=unicode("/"+url,"utf-8"),content=unicode(line))
				array.append(str(line))
				fp.write(line + "\n")

	writer.commit()
	fp.close()
	return "\n".join(array)

'''
	with open('links.txt') as fp:
		for line in fp:
			url=line
			if data not in url:
				print line
				try:
					f=urllib.urlopen(url)
					content1=f.read()
					soup = BeautifulSoup(content1)
					title = soup.get_text()
					writer.add_document(title=unicode(url,"utf-8"),path=unicode("/"+url,"utf-8"),content=unicode(title))
				except Exception as e:
				print 'caugth exception'
''' 
    

class Index(object):
    def GET(self):
        return render.hello_form()

    def POST(self):
        form = web.input(greet="Hello")
        return search(form.greet)

if __name__=="__main__":
	app = web.application(urls, globals())
	app.run()
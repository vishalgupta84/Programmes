import urllib2
import socket
import threading
def is_bad_proxy(pip):    
    try:
        timeout=1
        proxy_handler = urllib2.ProxyHandler({'http': pip})
        opener = urllib2.build_opener(proxy_handler)
        opener.addheaders = [('User-agent', 'Mozilla/5.0')]
        urllib2.install_opener(opener)
        req=urllib2.Request('http://www.google.com')  # change the URL to test here
        sock=urllib2.urlopen(req,None,timeout)
        print "%s is working" % (pip)
    except urllib2.HTTPError, e:
        print 'Error code: ', e.code
        return e.code
    except Exception, detail:
        print "ERROR:", detail
        return True
    return False

def main():
    socket.setdefaulttimeout(0.1)

    # two sample proxy IPs
    #proxyList = ['172.16.117.6:8080', '172.16.115.80:8080']

    for i in range(255):
        for j in range(255):
            currentProxy='172.16.'+str(i)+'.'+str(j)
            a=threading.Thread(None,is_bad_proxy,None,currentProxy,None)
            a.start()
            a.join()

if __name__ == '__main__':
    main()
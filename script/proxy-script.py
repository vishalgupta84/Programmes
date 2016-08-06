import os
port=8080
for i in range(255):
	for j in range(255):
		ip="http_proxy=http://172.16."+str(i)+'.'+str(j)+"/ curl -s --connect-timeout "+str(.05)+" www.google.com/humans.txt"
		read=os.popen(ip).read();
		if(read=="Google is built by a large team of engineers, designers, researchers, robots, and others in many different sites across the globe. It is updated continuously, and built with more tools and technologies than we can shake a stick at. If you'd like to help us out, see google.com/careers.\n"):
			#os.system()
			print "172.16."+str(i)+'.'+str(j)

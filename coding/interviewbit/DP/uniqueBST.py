A=input("Number");
up=1
down=1;
for i in range(2,A+1):
	up=up*(i+A);
	down=down*i;
print(up/down);
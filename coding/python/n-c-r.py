def n_c_r(n,r):
	full=1
	half=1
	other=1
	for i in range(2,n+1):
		full=full*i
		if i<=r:
			half=half*i
		if i<=(n-r):
			other=other*i
		if full%half==0:
			full=full/half
			half=1
		if full%other==0:
			full=full/other
			other=1
	print full
n=input()
r=input()
n_c_r(n,r)
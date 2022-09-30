shape = '*'
n=7
nspaces = int(n/2)
nchar = 1
li = [];
for i in range(n):
  spacecount=0;
  charcount=0;
  #print((' '*nspaces)+shape*(nchar))
  li.append((' '*nspaces)+shape*(nchar))
  if(i<n/2-1):
      nchar += 2
      nspaces -= 1
  else:
      nchar -= 2
      nspaces += 1
      
for i in li:
  print(i)

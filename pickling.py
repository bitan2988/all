import socket
import time
import pickle
#“Pickling” is the process whereby a Python object hierarchy is converted 
#into a byte stream, and “unpickling” is the inverse operation, whereby a 
#byte stream (from a binary file or bytes-like object) is converted back 
#into an object hierarchy. so we can send them through a socket
d = {1: "hey", 2: "There"}
msg = pickle.dumps(d)  #pickling
print("pickled = ",msg)
headerSize = 10
print(headerSize,"\nbytes   ",bytes(headerSize))
print("header length in bytes = ",len(bytes(headerSize)))
dem = "hello world i am bitan"
deml = len(dem.encode("utf-8"))
print("deml = ",deml)
print("hello world".encode("utf-8"))


#depickling

print(pickle.loads(msg))

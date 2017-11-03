import os

user = os.environ.get( "USERNAME" )

path = os.path.abspath(os.sep) + "Windows\\"

completeName = os.path.join(path, "user.txt")

file = open(completeName, "w")

file.write(user)

file.close()

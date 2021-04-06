import json
import os

os.system("curl   -H 'Accept: application/vnd.github.v3+json'   https://api.github.com/orgs/cognizance-amrita/repos >>repo.json")
f=open('repo.json',)

data=json.load(f)
urls=[]
for i in range(len(data)):
    urls.append("perceval git --json-line " + data[i]['html_url'] + " >> commits.json")
    os.system(urls[i])
f.close()

import json


def Merge(dict1, dict2): 

    return(dict2.update(dict1)) 

with open('generated.json',"r") as f:
    jason=json.load(f)

dicc={}
newdicc={}
for user in jason["contacts"]:
    name=user["name"]
    initial=name[0]
    if initial in newdicc:
        #print(f"ya existe {initial}")
        newdicc[initial].append( { name : { "telefono": user["telefono"], "email": user["email"] , "company" : user["company"] , "extra" : user["extra"] }} )
        #newdicc=Merge(dicc[initial],{ name : { "telefono": user["telefono"], "email": user["email"] , "company" : user["company"] , "extra" : user["extra"] }, } )
    else:
        newdicc[initial]= [{ name : { "telefono": user["telefono"], "email": user["email"] , "company" : user["company"] , "extra" : user["extra"] }, }]

#print(dicc)

json_formatted_str = json.dumps(newdicc, indent=2)

print(json_formatted_str)
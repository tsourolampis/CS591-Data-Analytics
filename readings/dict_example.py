# author: babis@seas.harvard.edu

#empty table 
d ={}

#insert
d["Andrei Rublev"] = "Tarkovsky" 
d["Stalker"] = "Tarkovsky" 
d["Viridiana"] ="Bunuel"
d[('123','a')] = "a123" 

#lookup
print(d["Stalker"])
print(d[('123','a')])

#delete
del d["Stalker"]
print(d["Stalker"])
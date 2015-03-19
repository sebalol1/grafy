#!/usr/bin/python
max=0
w=input("podaj liczbe wierzcholkow: ")
k=input("podaj liczbe krawedzi: ")
ms = w*w*[0]
sw=w*[0]
for i in range(0,k):
    ok = False
    while not ok:
        ok = True
        pocz=input("podaj poczatkowy wierzcholek krawedzi "+str(i+1)+": ")
        kon=input("podaj koncowy wierzcholek krawedzi "+str(i+1)+": ")
        if pocz==kon:
            print "WIERZCHOLEK POCZATKOWY I KONCOWY MUSZA BYC ROZNE!"
            ok=False
        if pocz < 1 or kon < 1:
            print "WIERZCHOLEK NIE MOZE MIEC INDEKSU MNIEJSZEGO OD 1!"
            ok=False
        if pocz > w or kon > w:
            print "WIERZCHOLEK NIE MOZE MIEC INDEKSU WIEKSZEGO OD n (" + str(w) + ")"
            ok=False
    ms[pocz-1+w*(kon-1)] = 1
    ms[kon-1+w*(pocz-1)] = 1
for x in range(0,w):
    print ms[w*x:w*(x+1)]
for x in range(0,w):
    st = sum(ms[w*x:w*(x+1)])
    print "Stopien wiercholka " + str(x+1) + " wynosi: " + str(st)
    if ( st > max ):
        max=st
print "Stopien grafu wynosi: " + str(max)

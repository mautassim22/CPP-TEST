#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    char q,w,e,r,t,y,u,i,o,p;

int ii=1;
    cout<<"insert"<<endl;
    cin>>q;

    do{

switch(q){

case 'q':

    PlaySound("q.wav",NULL, SND_FILENAME|SND_SYNC||cin>>w);
cout<<">>";
cin>>w;

    break;

    }

      switch(w){
case 'w':
     PlaySound("w.wav",NULL, SND_FILENAME|SND_SYNC||cin>>e);
cout<<">>";
cin>>e;
    break;

    }

    switch(e){
case 'e':
    PlaySound("e.wav",NULL, SND_FILENAME|SND_SYNC||cin>>r);
cout<<">>";
cin>>r;
    break;
    }

    switch(r){
case 'r':
    PlaySound("r.wav",NULL, SND_FILENAME|SND_SYNC||cin>>t);
cout<<">>";
cin>>t;
break;

    }

    switch(t){

case 't':
    PlaySound("t.wav",NULL, SND_FILENAME|SND_SYNC||cin>>y);
cout<<">>";
cin>>y;
break;

    }

    switch(y){

case 'y':
    PlaySound("y.wav",NULL, SND_FILENAME|SND_SYNC||cin>>u);
cout<<">>";
cin>>u;

    break;

    }


    switch(u){
case 'u':

    PlaySound("u.wav",NULL, SND_FILENAME|SND_SYNC||cin>>i);
cout<<">>";
cin>>i;
    break;
    }

    switch(i){
case 'i':
     PlaySound("i.wav",NULL, SND_FILENAME|SND_SYNC||cin>>o);
cout<<">>";
cin>>o;
    break;
    }

    switch(o){

case 'o':
    PlaySound("o.wav",NULL, SND_FILENAME|SND_SYNC||cin>>p);
cout<<">>";
cin>>p;
    break;
    }

    switch(p){
case 'a':
    PlaySound("a.wav",NULL, SND_FILENAME|SND_SYNC);
break;
    }

    }while(i<=3009);

    return 0;
}
//===============================================================

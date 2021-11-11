#include <iostream>
#include <fstream>

using namespace std;



int main()
{
    ofstream fount("calendario.txt");

    //arrey di orari
    float lun[40];
    float mar[40];
    float mer[40];
    float gio[40];
    float ven[40];

    //arrey titolazioni
    string a[40]; 
    string b[40];
    string y[40];
    string d[40];
    string e[40];



    int v=0; //val di verifica
    string val;
    int i=0;
    float x;
    int ver;

    //verifico se val va bene
    do
    {

    
        if(v==1)
        {
            cout<<"caratere non conosciuto per favore insire y/n "<<endl;
            cin>>val;
        }
        else
        {
            cout<<"vuoi inserire impegni in lunedi  (y/n) "<<endl; 
            cin>>val;
        }    
       v=1;//cambio la val di verifica cosi che mi cambia scritta in out

    }while(val != "y" && val!="n");

    v=0;//resetto la val di verifica sicuro mi riserve dopo

    if(val == "y")
    {

        do
        {
            do{

                //controllo se l'orario inserito è giusto
                if(v==0)
                {
                    cout<<"dimmi l'orario dell impegno non si possono inserire impegni alle 00"<<endl;
                    cin>>lun[i];
                    x=lun[i];
                }
                else
                {
                    cout<<"orario non valido "<<endl;
                    cin>>lun[i];
                    x=lun[i];
                }
                
                ver=x;
                v=1;


            }while( x >= 24 || x < 0 || (!( (x-ver) >= 0 && (x-ver) <= 0.59 ) )  );

            v=0;
            val="";
            ver=0;

            cout<<"dimmi la titolazione dell impegno"<<endl;
            cin>>a[i];
            cout<<"vuoi inserire un altro impegno (y/n)"<<endl;
            cin>>val;

            //verifico se val va bene
            do
            {

    
                if(v==1)
                {
                    cout<<"caratere non conosciuto per favore insire y/n "<<endl;
                    cin>>val;
                }   
                v=1;//cambio la val di verifica cosi che mi cambia scritta in out

            }while(val !="y" && val !="n" );

            v=0; //resetto la val di verifica sicuro mi riserve dopo
            i=i+1;

        }while (val == "y");
        for (int c=0;c<i;c=c+1)
        {
            x=lun[c];
            if (x >= 14.20 && x <= 15.30)
            {
                cout<<"non puoi prendere matteo Perche' devi "<<a[c]<<" alle "<<lun[c]<<endl;
                v=1;
                fount<<"non puoi prendere matteo Perche' devi "<<a[c]<<" alle "<<lun[c]<<endl;
            }

            fount<<"Lunedi devi "<<a[c]<<" alle "<<lun[c]<<endl;  
        }
        
    }
    if (v==0)
    {
        cout<<"puoi andare a prendere matteo "<<endl; 
        fount<<"puoi andare a prendere matteo "<<endl;
    }


    //resetto le varibili
    v=0; 
    val="";
    i=0;
    x=0;
    ver=0;

//  martedì ---------------------------------------------------------------------------------------------  

do
    {

    
        if(v==1)
        {
            cout<<"caratere non conosciuto per favore insire y/n "<<endl;
            cin>>val;
        }
        else
        {
            cout<<"vuoi inserire impegni in martedì  (y/n) "<<endl; 
            cin>>val;
        }    
       v=1;//cambio la val di verifica cosi che mi cambia scritta in out

    }while(val != "y" && val!="n");

    v=0;//resetto la val di verifica sicuro mi riserve dopo

    if(val == "y")
    {

        do
        {
            do{

                //controllo se l'orario inserito è giusto
                if(v==0)
                {
                    cout<<"dimmi l'orario dell impegno non si possono inserire impegni alle 00"<<endl;
                    cin>>mar[i];
                    x=mar[i];
                }
                else
                {
                    cout<<"orario non valido "<<endl;
                    cin>>mar[i];
                    x=mar[i];
                }
                
                ver=x;
                v=1;


            }while( x >= 24 || x < 0 || (!( (x-ver) >= 0 && (x-ver) <= 0.59 ) )  );

            v=0;
            val="";
            ver=0;

            cout<<"dimmi la titolazione dell impegno"<<endl;
            cin>>b[i];
            cout<<"vuoi inserire un altro impegno (y/n)"<<endl;
            cin>>val;

            //verifico se val va bene
            do
            {

    
                if(v==1)
                {
                    cout<<"caratere non conosciuto per favore insire y/n "<<endl;
                    cin>>val;
                }   
                v=1;//cambio la val di verifica cosi che mi cambia scritta in out

            }while(val !="y" && val !="n" );

            v=0; //resetto la val di verifica sicuro mi riserve dopo
            i=i+1;

        }while (val == "y");
        for (int c=0;c<i;c=c+1)
        {
            x=mer[c];
            if (x >= 14.20 && x <= 15.30)
            {
                cout<<"non puoi prendere matteo Perche' devi "<<b[c]<<" alle "<<mar[c]<<endl;
                v=1;
                fount<<"non puoi prendere matteo Perche' devi "<<b[c]<<" alle "<<mar[c]<<endl;
            }

            fount<<"Lunedi devi "<<b[c]<<" alle "<<mer[c]<<endl;  
        }
        
    }
    if (v==0)
    {
        cout<<"puoi andare a prendere matteo "<<endl; 
        fount<<"puoi andare a prendere matteo "<<endl;
    }


    //resetto le varibili
    v=0; 
    val="";
    i=0;
    x=0;
    ver=0;
//  mercoledì ---------------------------------------------------------------------------------------------  

do
    {

    
        if(v==1)
        {
            cout<<"caratere non conosciuto per favore insire y/n "<<endl;
            cin>>val;
        }
        else
        {
            cout<<"vuoi inserire impegni in mercoledì  (y/n) "<<endl; 
            cin>>val;
        }    
       v=1;//cambio la val di verifica cosi che mi cambia scritta in out

    }while(val != "y" && val!="n");

    v=0;//resetto la val di verifica sicuro mi riserve dopo

    if(val == "y")
    {

        do
        {
            do{

                //controllo se l'orario inserito è giusto
                if(v==0)
                {
                    cout<<"dimmi l'orario dell impegno non si possono inserire impegni alle 00"<<endl;
                    cin>>mer[i];
                    x=mer[i];
                }
                else
                {
                    cout<<"orario non valido "<<endl;
                    cin>>mer[i];
                    x=mer[i];
                }
                
                ver=x;
                v=1;


            }while( x >= 24 || x < 0 || (!( (x-ver) >= 0 && (x-ver) <= 0.59 ) )  );

            v=0;
            val="";
            ver=0;

            cout<<"dimmi la titolazione dell impegno"<<endl;
            cin>>y[i];
            cout<<"vuoi inserire un altro impegno (y/n)"<<endl;
            cin>>val;

            //verifico se val va bene
            do
            {

    
                if(v==1)
                {
                    cout<<"caratere non conosciuto per favore insire y/n "<<endl;
                    cin>>val;
                }   
                v=1;//cambio la val di verifica cosi che mi cambia scritta in out

            }while(val !="y" && val !="n" );

            v=0; //resetto la val di verifica sicuro mi riserve dopo
            i=i+1;

        }while (val == "y");
        for (int c=0;c<i;c=c+1)
        {
            x=mer[c];
            if (x >= 12.20 && x <= 13.30)
            {
                cout<<"non puoi prendere matteo Perche' devi "<<y[c]<<" alle "<<mer[c]<<endl;
                v=1;
                fount<<"non puoi prendere matteo Perche' devi "<<y[c]<<" alle "<<mer[c]<<endl;
            }

            fount<<"Lunedi devi "<<y[c]<<" alle "<<mer[c]<<endl;  
        }
        
    }
    if (v==0)
    {
        cout<<"puoi andare a prendere matteo "<<endl; 
        fount<<"puoi andare a prendere matteo "<<endl;
    }


    //resetto le varibili
    v=0; 
    val="";
    i=0;
    x=0;
    ver=0;
    
//  giovedì --------------------------------------------------------------------------------------------
do
    {

    
        if(v==1)
        {
            cout<<"caratere non conosciuto per favore insire y/n "<<endl;
            cin>>val;
        }
        else
        {
            cout<<"vuoi inserire impegni in giovedi  (y/n) "<<endl; 
            cin>>val;
        }    
       v=1;//cambio la val di verifica cosi che mi cambia scritta in out

    }while(val != "y" && val!="n");

    v=0;//resetto la val di verifica sicuro mi riserve dopo

    if(val == "y")
    {

        do
        {
            do{

                //controllo se l'orario inserito è giusto
                if(v==0)
                {
                    cout<<"dimmi l'orario dell impegno non si possono inserire impegni alle 00"<<endl;
                    cin>>gio[i];
                    x=gio[i];
                }
                else
                {
                    cout<<"orario non valido "<<endl;
                    cin>>gio[i];
                    x=gio[i];
                }
                
                ver=x;
                v=1;


            }while( x >= 24 || x < 0 || (!( (x-ver) >= 0 && (x-ver) <= 0.59 ) )  );

            v=0;
            val="";
            ver=0;

            cout<<"dimmi la titolazione dell impegno"<<endl;
            cin>>e[i];
            cout<<"vuoi inserire un altro impegno (y/n)"<<endl;
            cin>>val;

            //verifico se val va bene
            do
            {

    
                if(v==1)
                {
                    cout<<"caratere non conosciuto per favore insire y/n "<<endl;
                    cin>>val;
                }   
                v=1;//cambio la val di verifica cosi che mi cambia scritta in out

            }while(val !="y" && val !="n" );

            v=0; //resetto la val di verifica sicuro mi riserve dopo
            i=i+1;

        }while (val == "y");
        for (int c=0;c<i;c=c+1)
        {
            x=gio[c];
            if (x >= 13.30 && x <= 14.20)
            {
                cout<<"non puoi prendere matteo Perche' devi "<<e[c]<<" alle "<<gio[c]<<endl;
                v=1;
                fount<<"non puoi prendere matteo Perche' devi "<<e[c]<<" alle "<<gio[c]<<endl;
            }

            fount<<"Lunedi devi "<<e[c]<<" alle "<<gio[c]<<endl;  
        }
        
    }
    if (v==0)
    {
        cout<<"puoi andare a prendere matteo "<<endl; 
        fount<<"puoi andare a prendere matteo "<<endl;
    }


    //resetto le varibili
    v=0; 
    val="";
    i=0;
    x=0;
    ver=0;   
// venerdi ---------------------------------------------------------------------------------------------
do
    {

    
        if(v==1)
        {
            cout<<"caratere non conosciuto per favore insire y/n "<<endl;
            cin>>val;
        }
        else
        {
            cout<<"vuoi inserire impegni in venerdi  (y/n) "<<endl; 
            cin>>val;
        }    
       v=1;//cambio la val di verifica cosi che mi cambia scritta in out

    }while(val != "y" && val!="n");

    v=0;//resetto la val di verifica sicuro mi riserve dopo

    if(val == "y")
    {

        do
        {
            do{

                //controllo se l'orario inserito è giusto
                if(v==0)
                {
                    cout<<"dimmi l'orario dell impegno non si possono inserire impegni alle 00"<<endl;
                    cin>>ven[i];
                    x=ven[i];
                }
                else
                {
                    cout<<"orario non valido "<<endl;
                    cin>>ven[i];
                    x=ven[i];
                }
                
                ver=x;
                v=1;


            }while( x >= 24 || x < 0 || (!( (x-ver) >= 0 && (x-ver) <= 0.59 ) )  );

            v=0;
            val="";
            ver=0;

            cout<<"dimmi la titolazione dell impegno"<<endl;
            cin>>d[i];
            cout<<"vuoi inserire un altro impegno (y/n)"<<endl;
            cin>>val;

            //verifico se val va bene
            do
            {

    
                if(v==1)
                {
                    cout<<"caratere non conosciuto per favore insire y/n "<<endl;
                    cin>>val;
                }   
                v=1;//cambio la val di verifica cosi che mi cambia scritta in out

            }while(val !="y" && val !="n" );

            v=0; //resetto la val di verifica sicuro mi riserve dopo
            i=i+1;

        }while (val == "y");
        for (int c=0;c<i;c=c+1)
        {
            x=ven[c];
            if (x >= 13.30 && x <= 14.20)
            {
                cout<<"non puoi prendere matteo Perche' devi "<<d[c]<<" alle "<<ven[c]<<endl;
                v=1;
                fount<<"non puoi prendere matteo Perche' devi "<<d[c]<<" alle "<<ven[c]<<endl;
            }

            fount<<"Lunedi devi "<<d[c]<<" alle "<<ven[c]<<endl;  
        }
        
    }
    if (v==0)
    {
        cout<<"puoi andare a prendere matteo "<<endl; 
        fount<<"puoi andare a prendere matteo "<<endl;
    }


    //resetto le varibili
    v=0; 
    val="";
    i=0;
    x=0;
    ver=0;  


fount.close();

system ("pause");
}
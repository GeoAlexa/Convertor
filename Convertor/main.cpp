#include <iostream>

using namespace std;

int main()
{
    int unitate_de_masura, alege_marimea;

    cout<<"Convertor"<<"\n"<<"\n";
    cout<<"1. Lungime"<<"\n";
    cout<<"2. Arie"<<"\n";
    cout<<"3. Temperatura"<<"\n";
    cout<<"4. Putere"<<"\n";

    cin>>unitate_de_masura;
    cout<<"\n";

    if(unitate_de_masura==1)
    {
        long double milimetri=0, centimetri=0, metri=0, kilometri=0, mile=0, toli=0, picioare=0, yarzi=0;

        cout<<"1. Milimetri"<<"\n";
        cout<<"2. Centimetri"<<"\n";
        cout<<"3. Metri"<<"\n";
        cout<<"4. Kilometri"<<"\n";
        cout<<"5. Toli"<<"\n";
        cout<<"6. Picioare"<<"\n";
        cout<<"7. Mile"<<"\n";
        cout<<"8. Yarzi"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";


        if(alege_marimea==1)
        {
            cout<<"Milimetri: ";
            cin>>milimetri;
            cout<<"\n";

            metri=milimetri/1000;
            centimetri=metri*100;
            kilometri=metri*0.001;
            toli=metri/0.0254;
            picioare=metri*3.28083;
            mile=metri*0.000621371192;
            yarzi=metri/0.9144;

            cout<<"Centimetri: "<<centimetri<<"\n";
            cout<<"Metri: "<<metri<<"\n";
            cout<<"Kilometri: "<<kilometri<<"\n";
            cout<<"Toli: "<<toli<<"\n";
            cout<<"Picioare: "<<picioare<<"\n";
            cout<<"Mile: "<<mile<<"\n";
            cout<<"Yarzi: "<<yarzi<<"\n";
        }
        else if(alege_marimea==2)
        {
            cout<<"Centimetri: ";
            cin>>centimetri;
            cout<<"\n";

            metri=centimetri/100;
            milimetri=metri*1000;
            kilometri=metri*0.001;
            toli=metri/0.0254;
            picioare=metri*3.28083;
            mile=metri*0.000621371192;
            yarzi=metri/0.9144;

            cout<<"Milimetri: "<<milimetri<<"\n";
            cout<<"Metri: "<<metri<<"\n";
            cout<<"Kilometri: "<<kilometri<<"\n";
            cout<<"Toli: "<<toli<<"\n";
            cout<<"Picioare: "<<picioare<<"\n";
            cout<<"Mile: "<<mile<<"\n";
            cout<<"Yarzi: "<<yarzi<<"\n";

        }

        else if(alege_marimea==3)
        {
            cout<<"Metri: ";
            cin>>metri;
            cout<<"\n";

            milimetri=metri*1000;
            centimetri=metri*100;
            kilometri=metri*0.001;
            toli=metri/0.0254;
            picioare=metri*3.28083;
            mile=metri*0.000621371192;
            yarzi=metri/0.9144;

            cout<<"Milimetri: "<<milimetri<<"\n";
            cout<<"Centimetri: "<<centimetri<<"\n";
            cout<<"Kilometri: "<<kilometri<<"\n";
            cout<<"Toli: "<<toli<<"\n";
            cout<<"Picioare: "<<picioare<<"\n";
            cout<<"Mile: "<<mile<<"\n";
            cout<<"Yarzi: "<<yarzi<<"\n";
        }

        else if(alege_marimea==4)
        {
            cout<<"Kilometri: ";
            cin>>kilometri;
            cout<<"\n";

            metri=kilometri*1000;
            milimetri=metri*1000;
            centimetri=metri*100;
            toli=metri/0.0254;
            picioare=metri*3.28083;
            mile=metri*0.000621371192;
            yarzi=metri/0.9144;

            cout<<"Milimetri: "<<milimetri<<"\n";
            cout<<"Centimetri: "<<centimetri<<"\n";
            cout<<"Metri: "<<metri<<"\n";
            cout<<"Toli: "<<toli<<"\n";
            cout<<"Picioare: "<<picioare<<"\n";
            cout<<"Mile: "<<mile<<"\n";
            cout<<"Yarzi: "<<yarzi<<"\n";
        }

        else if(alege_marimea==5)
        {
            cout<<"Toli: ";
            cin>>toli;
            cout<<"\n";

            metri=toli*0.0254;
            milimetri=metri*1000;
            centimetri=metri*100;
            kilometri=metri/1000;
            picioare=metri*3.28083;
            mile=metri*0.000621371192;
            yarzi=metri/0.9144;

            cout<<"Milimetri: "<<milimetri<<"\n";
            cout<<"Centimetri: "<<centimetri<<"\n";
            cout<<"Metri: "<<metri<<"\n";
            cout<<"Kilometri: "<<kilometri<<"\n";
            cout<<"Picioare: "<<picioare<<"\n";
            cout<<"Mile: "<<mile<<"\n";
            cout<<"Yarzi: "<<yarzi<<"\n";
        }

        else if(alege_marimea==6)
        {
            cout<<"Picioare: ";
            cin>>picioare;
            cout<<"\n";

            metri=picioare/3.28083;
            milimetri=metri*1000;
            centimetri=metri*100;
            kilometri=metri/1000;
            toli=metri/0.0254;
            mile=metri*0.000621371192;
            yarzi=metri/0.9144;

            cout<<"Milimetri: "<<milimetri<<"\n";
            cout<<"Centimetri: "<<centimetri<<"\n";
            cout<<"Metri: "<<metri<<"\n";
            cout<<"Kilometri: "<<kilometri<<"\n";
            cout<<"Toli: "<<toli<<"\n";
            cout<<"Mile: "<<mile<<"\n";
            cout<<"Yarzi: "<<yarzi<<"\n";
        }

        else if(alege_marimea==7)
        {
            cout<<"Mile: ";
            cin>>mile;
            cout<<"\n";

            metri=mile/0.000621371192;
            picioare=metri*3.28083;
            milimetri=metri*1000;
            centimetri=metri*100;
            kilometri=metri/1000;
            toli=metri/0.0254;
            yarzi=metri/0.9144;

            cout<<"Milimetri: "<<milimetri<<"\n";
            cout<<"Centimetri: "<<centimetri<<"\n";
            cout<<"Metri: "<<metri<<"\n";
            cout<<"Kilometri: "<<kilometri<<"\n";
            cout<<"Toli: "<<toli<<"\n";
            cout<<"Picioare: "<<picioare<<"\n";
            cout<<"Yarzi: "<<yarzi<<"\n";
        }

         else if(alege_marimea==8)
        {
            cout<<"Yarzi: ";
            cin>>yarzi;
            cout<<"\n";

            metri=yarzi*0.9144;
            mile=metri*0.000621371192;
            picioare=metri*3.28083;
            milimetri=metri*1000;
            centimetri=metri*100;
            kilometri=metri/1000;
            toli=metri/0.0254;

            cout<<"Milimetri: "<<milimetri<<"\n";
            cout<<"Centimetri: "<<centimetri<<"\n";
            cout<<"Metri: "<<metri<<"\n";
            cout<<"Kilometri: "<<kilometri<<"\n";
            cout<<"Toli: "<<toli<<"\n";
            cout<<"Picioare: "<<picioare<<"\n";
            cout<<"Mile: "<<mile<<"\n";
        }
        else
            cout<<"Valoare invalida";
    }

    else if(unitate_de_masura==2)
    {
        long double metri_patrati=0, ari=0, acri=0, hectare=0, yarzi_patrati=0;

        cout<<"1. Metri patrati"<<"\n";
        cout<<"2. Ari"<<"\n";
        cout<<"3. Acri"<<"\n";
        cout<<"4. Hectare"<<"\n";
        cout<<"5. Yarzi patrati"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Metri patrati: ";
            cin>>metri_patrati;
            cout<<"\n";

            ari=metri_patrati*0.01;
            acri=metri_patrati*0.0002471053;
            hectare=metri_patrati*0.0001;
            yarzi_patrati=metri_patrati*1.19598939404;

            cout<<"Ari: "<<ari<<"\n";
            cout<<"Acri: "<<acri<<"\n";
            cout<<"Hectare: "<<hectare<<"\n";
            cout<<"Yarzi patrati: "<<yarzi_patrati<<"\n";
        }

        else if(alege_marimea==2)
        {
            cout<<"Ari: ";
            cin>>ari;
            cout<<"\n";

            metri_patrati=ari/0.01;
            acri=metri_patrati*0.0002471053;
            hectare=metri_patrati*0.0001;
            yarzi_patrati=metri_patrati*1.19598939404;

            cout<<"Metri patrati: "<<metri_patrati<<"\n";
            cout<<"Acri: "<<acri<<"\n";
            cout<<"Hectare: "<<hectare<<"\n";
            cout<<"Yarzi patrati: "<<yarzi_patrati<<"\n";
        }

        else if(alege_marimea==3)
        {
            cout<<"Acri: ";
            cin>>acri;
            cout<<"\n";

            metri_patrati=acri/0.0002471053;
            ari=metri_patrati*0.01;
            hectare=metri_patrati*0.0001;
            yarzi_patrati=metri_patrati*1.19598939404;

            cout<<"Metri patrati: "<<metri_patrati<<"\n";
            cout<<"Ari: "<<ari<<"\n";
            cout<<"Hectare: "<<hectare<<"\n";
            cout<<"Yarzi patrati: "<<yarzi_patrati<<"\n";
        }

        else if(alege_marimea==4)
        {
            cout<<"Hectare: ";
            cin>>hectare;
            cout<<"\n";

            metri_patrati=hectare/0.0001;
            ari=metri_patrati*0.01;
            acri=metri_patrati*0.0002471053;
            yarzi_patrati=metri_patrati*1.19598939404;

            cout<<"Metri patrati: "<<metri_patrati<<"\n";
            cout<<"Ari: "<<ari<<"\n";
            cout<<"Acri: "<<acri<<"\n";
            cout<<"Yarzi patrati: "<<yarzi_patrati<<"\n";
        }

        else if(alege_marimea==5)
        {
            cout<<"Yarzi patrati: ";
            cin>>yarzi_patrati;
            cout<<"\n";

            metri_patrati=yarzi_patrati/1.19598939404;
            ari=metri_patrati*0.01;
            acri=metri_patrati*0.0002471053;
            hectare=metri_patrati*0.0001;

            cout<<"Metri patrati: "<<metri_patrati<<"\n";
            cout<<"Ari: "<<ari<<"\n";
            cout<<"Acri: "<<acri<<"\n";
            cout<<"Hectare: "<<hectare<<"\n";
        }
        else
            cout<<"Alegere invalida";
    }

    else if(unitate_de_masura==3)
    {
        long double celsius=0, kelvin=0, fahrenheit=0, rankine=0;

        cout<<"1. Celsius"<<"\n";
        cout<<"2. Kelvin"<<"\n";
        cout<<"3. Fahrenheit"<<"\n";
        cout<<"4. Rankine"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Celsius: ";
            cin>>celsius;
            cout<<"\n";

            fahrenheit=(celsius*1.8)+32;
            kelvin=celsius+273.15;
            rankine=(celsius+273.15)*9/5;

            cout<<"Fahrenheit: "<<fahrenheit<<"\n";
            cout<<"Kelvin: "<<kelvin<<"\n";
            cout<<"Rankine:"<<rankine<<"\n";
        }
        else if(alege_marimea==2)
        {
            cout<<"Kelvin: ";
            cin>>kelvin;
            cout<<"\n";

            celsius=kelvin-273.15;
            fahrenheit=(celsius*1.8)+32;
            rankine=(celsius+273.15)*9/5;

            cout<<"Fahrenheit: "<<fahrenheit<<"\n";
            cout<<"Celsius: "<<celsius<<"\n";
            cout<<"Rankine:"<<rankine<<"\n";
        }


        else if(alege_marimea==3)
        {
            cout<<"Fahrenheit: ";
            cin>>fahrenheit;
            cout<<"\n";

            celsius=(fahrenheit-32)/1.8;
            kelvin=celsius+273.15;
            rankine=(celsius+273.15)*9/5;

            cout<<"Celsius: "<<celsius<<"\n";
            cout<<"Kelvin: "<<kelvin<<"\n";
            cout<<"Rankine:"<<rankine<<"\n";
        }


        else if(alege_marimea==4)
        {
            cout<<"Rankine: ";
            cin>>rankine;
            cout<<"\n";

            celsius=(rankine-491.67)*5/9;
            kelvin=celsius+273.15;
            fahrenheit=(celsius*1.8)+32;

            cout<<"Celsius: "<<celsius<<"\n";
            cout<<"Kelvin: "<<kelvin<<"\n";
            cout<<"Fahrenheit:"<<fahrenheit<<"\n";
        }
        else
            cout<<"Valoare invalida";
    }

    else if(unitate_de_masura==4)
    {
        long double cal_putere=0, watt=0, kilowatt=0;

        cout<<"1. Watt"<<"\n";
        cout<<"2. Kilowatt"<<"\n";
        cout<<"3. Cal putere"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Watt: ";
            cin>>watt;
            cout<<"\n";

            kilowatt=watt*0.001;
            cal_putere=watt*0.00135962161;

            cout<<"Kilowatt: "<<kilowatt<<"\n";
            cout<<"Cai putere: "<<cal_putere<<"\n";


        }

        else if(alege_marimea==2)
        {
            cout<<"Kilowatt: ";
            cin>>kilowatt;
            cout<<"\n";

            watt=kilowatt/0.001;
            cal_putere=watt*0.00135962161;

            cout<<"Watt: "<<watt<<"\n";
            cout<<"Cai putere: "<<cal_putere<<"\n";

        }

        else if(alege_marimea==3)
        {
            cout<<"Cai putere: ";
            cin>>cal_putere;
            cout<<"\n";

            watt=cal_putere/0.00135962161;
            kilowatt=watt*0.001;

            cout<<"Watt: "<<watt<<"\n";
            cout<<"Kilowatt: "<<kilowatt<<"\n";

        }


    }


    return 0;
}

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
    cout<<"5. Energie"<<"\n";
    cout<<"6. Presiune"<<"\n";
    cout<<"7. Viteza"<<"\n";
    cout<<"8. Densitate"<<"\n";
    cout<<"9. Debit"<<"\n";
    cout<<"10. Timp"<<"\n";

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
    else if(unitate_de_masura==5)
    {
        long double jouli=0, calorii=0, kilojouli=0, livre=0, kilocalorii=0;

        cout<<"1. Jouli"<<"\n";
        cout<<"2. Kilojouli"<<"\n";
        cout<<"3. Calorii"<<"\n";
        cout<<"4. Kilocalorii"<<"\n";
        cout<<"5. Livre forta"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Jouli: ";
            cin>>jouli;
            cout<<"\n";

            kilojouli=jouli*0.001;
            calorii=jouli*0.2388;
            kilocalorii=jouli*0.0002388;
            livre=jouli*8.850745791;

            cout<<"Kilojouli: "<<kilojouli<<"\n";
            cout<<"Calorii: "<<calorii<<"\n";
            cout<<"Kilocalori: "<<kilocalorii<<"\n";
            cout<<"Livre forta: "<<livre<<"\n";

        }

        else if(alege_marimea==2)
        {
            cout<<"Kilojouli: ";
            cin>>kilojouli;
            cout<<"\n";

            jouli=kilojouli/0.001;
            calorii=jouli*0.2388;
            kilocalorii=jouli*0.0002388;
            livre=jouli*8.850745791;

            cout<<"Jouli: "<<jouli<<"\n";
            cout<<"Calorii: "<<calorii<<"\n";
            cout<<"Kilocalori: "<<kilocalorii<<"\n";
            cout<<"Livre forta: "<<livre<<"\n";

        }

        else if(alege_marimea==3)
        {
            cout<<"Calorii: ";
            cin>>calorii;
            cout<<"\n";

            jouli=calorii/0.2388;
            kilojouli=jouli*0.001;
            kilocalorii=jouli*0.0002388;
            livre=jouli*8.850745791;

            cout<<"Jouli: "<<jouli<<"\n";
            cout<<"Kilojouli: "<<kilojouli<<"\n";
            cout<<"Kilocalori: "<<kilocalorii<<"\n";
            cout<<"Livre forta: "<<livre<<"\n";
        }

        else if(alege_marimea==4)
        {
            cout<<"Kilocalorii: ";
            cin>>kilocalorii;
            cout<<"\n";


            jouli=kilocalorii/0.0002388;
            livre=jouli/8.850745791;
            calorii=jouli*0.2388;
            kilojouli=jouli*0.001;

            cout<<"Jouli: "<<jouli<<"\n";
            cout<<"Kilojouli: "<<kilojouli<<"\n";
            cout<<"calori: "<<calorii<<"\n";
            cout<<"Livre: "<<livre<<"\n";
        }


        else if(alege_marimea==5)
        {
            cout<<"Livre forta: ";
            cin>>livre;
            cout<<"\n";

            jouli=livre/8.850745791;
            calorii=jouli*0.2388;
            kilojouli=jouli*0.001;
            kilocalorii=jouli*0.0002388;

            cout<<"Jouli: "<<jouli<<"\n";
            cout<<"Kilojouli: "<<kilojouli<<"\n";
            cout<<"calori: "<<calorii<<"\n";
            cout<<"Kilocalori: "<<kilocalorii<<"\n";
        }


    }

    else if(unitate_de_masura==6)
    {
        long double kilopascal=0, bar=0, milibar=0, pascal=0, torr=0;

        cout<<"1. Pascal"<<"\n";
        cout<<"2. Kilopascal"<<"\n";
        cout<<"3. Milibar"<<"\n";
        cout<<"4. Bar"<<"\n";
        cout<<"5. Torr"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Pascal: ";
            cin>>pascal;
            cout<<"\n";

            kilopascal=pascal*0.001;
            bar=pascal*0.00001;
            milibar=pascal*0.01;
            torr=pascal*0.007500617;


            cout<<"Kilopascal: "<<kilopascal<<"\n";
            cout<<"Milibar: "<<milibar<<"\n";
            cout<<"Bar: "<<bar<<"\n";
            cout<<"Torr: "<<torr<<"\n";
        }

        else if(alege_marimea==2)
        {
            cout<<"Kilopascal: ";
            cin>>kilopascal;
            cout<<"\n";

            pascal=kilopascal/0.001;
            bar=pascal*0.00001;
            milibar=pascal*0.01;
            torr=pascal*0.007500617;


            cout<<"Pascal: "<<pascal<<"\n";
            cout<<"Milibar: "<<milibar<<"\n";
            cout<<"Bar: "<<bar<<"\n";
            cout<<"Torr: "<<torr<<"\n";
        }

        else if(alege_marimea==3)
        {
            cout<<"Milibar: ";
            cin>>milibar;
            cout<<"\n";

            pascal=milibar/0.01;
            kilopascal=pascal*0.001;
            bar=pascal*0.00001;
            torr=pascal*0.007500617;

            cout<<"Pascal: "<<pascal<<"\n";
            cout<<"Kilopascal: "<<kilopascal<<"\n";
            cout<<"Bar: "<<bar<<"\n";
            cout<<"Torr: "<<torr<<"\n";
        }

        else if(alege_marimea==4)
        {
            cout<<"Bar: ";
            cin>>bar;
            cout<<"\n";

            pascal=bar/0.00001;
            milibar=pascal*0.01;
            kilopascal=pascal*0.001;
            torr=pascal*0.007500617;

            cout<<"Pascal: "<<pascal<<"\n";
            cout<<"Kilopascal: "<<kilopascal<<"\n";
            cout<<"Milibar: "<<milibar<<"\n";
            cout<<"Torr: "<<torr<<"\n";
        }

        else if(alege_marimea==5)
        {
            cout<<"Torr: ";
            cin>>torr;
            cout<<"\n";

            pascal=torr/0.007500617;
            bar=pascal*0.00001;
            milibar=pascal*0.01;
            kilopascal=pascal*0.001;

            cout<<"Pascal: "<<pascal<<"\n";
            cout<<"Kilopascal: "<<kilopascal<<"\n";
            cout<<"Milibar: "<<milibar<<"\n";
            cout<<"Bar: "<<bar<<"\n";
        }
        else
            cout<<"Valoare invalida";
    }

    else if(unitate_de_masura==7)
    {
        long double metrups=0, metrupmin=0, metruph=0, mph=0, kmh=0;

        cout<<"1. Metru/Secunda"<<"\n";
        cout<<"2. Metru/Minut"<<"\n";
        cout<<"3. Metru/Ora"<<"\n";
        cout<<"4. MPH"<<"\n";
        cout<<"5. KMH"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Metru/Secunda: ";
            cin>>metrups;
            cout<<"\n";

            metrupmin=metrups*60;
            metruph=metrups*3600;
            mph=metrups*2.2369362920;
            kmh=metrups*3.6;


            cout<<"Metru/Minut: "<<metrupmin<<"\n";
            cout<<"Metru/Ora: "<<metruph<<"\n";
            cout<<"MPH: "<<mph<<"\n";
            cout<<"KMH: "<<kmh<<"\n";
        }

        else if(alege_marimea==2)
        {
            cout<<"Metru/Minut: ";
            cin>>metrupmin;
            cout<<"\n";

            metrups=metrupmin/60;
            metruph=metrups*3600;
            mph=metrups*2.2369362920;
            kmh=metrups*3.6;

            cout<<"Metru/Secunda: "<<metrups<<"\n";
            cout<<"Metru/Ora: "<<metruph<<"\n";
            cout<<"MPH: "<<mph<<"\n";
            cout<<"KMH: "<<kmh<<"\n";
        }

        else if(alege_marimea==3)
        {
            cout<<"Metru/Ora: ";
            cin>>metruph;
            cout<<"\n";

            metrups=metruph/3600;
            metrupmin=metrups*60;
            mph=metrups*2.2369362920;
            kmh=metrups*3.6;

            cout<<"Metru/Secunda: "<<metrups<<"\n";
            cout<<"Metru/Minut: "<<metrupmin<<"\n";
            cout<<"MPH: "<<mph<<"\n";
            cout<<"KMH: "<<kmh<<"\n";
        }

        else if(alege_marimea==4)
        {
            cout<<"MPH: ";
            cin>>mph;
            cout<<"\n";

            metrups=mph/2.2369362920;
            metruph=metrups*3600;
            metrupmin=metrups*60;
            kmh=metrups*3.6;

            cout<<"Metru/Secunda: "<<metrups<<"\n";
            cout<<"Metru/Minut: "<<metrupmin<<"\n";
            cout<<"Metru/Ora: "<<metruph<<"\n";
            cout<<"KMH: "<<kmh<<"\n";
        }

        else if(alege_marimea==5)
        {
            cout<<"KMH: ";
            cin>>kmh;
            cout<<"\n";


            metrups=kmh/3.6;
            mph=metrups*2.2369362920;
            metruph=metrups*3600;
            metrupmin=metrups*60;

            cout<<"Metru/Secunda: "<<metrups<<"\n";
            cout<<"Metru/Minut: "<<metrupmin<<"\n";
            cout<<"Metru/Ora: "<<metruph<<"\n";
            cout<<"MPH: "<<mph<<"\n";
        }
        else
            cout<<"Valoare invalida";

    }

    else if(unitate_de_masura==8)
    {
        long double kgmcub=0, galonUK=0, galonUS=0;

        cout<<"1. Kg/Metru cub"<<"\n";
        cout<<"2. Galon US"<<"\n";
        cout<<"3. Galon UK"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Kg/Metru cub: ";
            cin>>kgmcub;
            cout<<"\n";

            galonUK=kgmcub*0.0100224128552;
            galonUS=kgmcub*0.0083454044531;

            cout<<"Galon US: "<<galonUS<<"\n";
            cout<<"Galon UK: "<<galonUK<<"\n";
        }

        else if(alege_marimea==2)
        {
            cout<<"Galon US: ";
            cin>>galonUS;
            cout<<"\n";

            kgmcub=galonUS/0.0083454044531;
            galonUK=kgmcub*0.0100224128552;

            cout<<"Kg/Metru cub: "<<kgmcub<<"\n";
            cout<<"Galon UK: "<<galonUK<<"\n";
        }

        else if(alege_marimea==3)
        {
            cout<<"Galon UK: ";
            cin>>galonUK;
            cout<<"\n";

            kgmcub=galonUK/0.0100224128552;
            galonUS=kgmcub*0.0083454044531;


            cout<<"Kg/Metru cub: "<<kgmcub<<"\n";
            cout<<"Galon UK: "<<galonUK<<"\n";
        }
        else
            cout<<"Valoare invalida";

    }

    else if(unitate_de_masura==9)
    {
        long double mcubs=0, galonUSmin=0;

        cout<<"1. Metru cub/Secunda"<<"\n";
        cout<<"2. Galon US/Minut"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Metru cub/Secunda: ";
            cin>>mcubs;
            cout<<"\n";

            galonUSmin=mcubs*15852.047;

            cout<<"Galon US/Minut: "<<galonUSmin<<"\n";

        }

        else if(alege_marimea==2)
        {
            cout<<"Galon US/Minut: ";
            cin>>galonUSmin;
            cout<<"\n";

            mcubs=galonUSmin/15852.047;

            cout<<"Metru cub/Secunda: "<<mcubs<<"\n";

        }
        else
            cout<<"Comanda invalida";
    }

    else if(unitate_de_masura==10)
    {
        long double s=0, d=0;

        cout<<"1. Secunda"<<"\n";
        cout<<"2. Decisecunda"<<"\n";

        cin>>alege_marimea;
        cout<<"\n";

        if(alege_marimea==1)
        {
            cout<<"Secunda: ";
            cin>>s;
            cout<<"\n";

            d=s*10;

            cout<<"Decisecunda: "<<d<<"\n";

        }

        else if(alege_marimea==2)
        {
            cout<<"Decisecunda: ";
            cin>>d;
            cout<<"\n";

            s=d/10;

            cout<<"Secunda: "<<s<<"\n";

        }
        else
            cout<<"Comanda invalida";
    }
    else
        cout<<"Comanda invalida";

    return 0;
}

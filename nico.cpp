#include <iostream>

using namespace std;
int main()
{
    string prendaElegidaArriba = "";
    string prendaElegidaAbajo = "";

    enum prendaArriba
    {
        Remera = 1,
        Saco,
        Chaleco,
        CropTop,
        Buzo,
    };

    enum prendaAbajo
    {
        PantalonDeVestir = 1,
        Pollera,
        Bermuda,
        Jean,
        PantalonCargo,
    };

    string nombreJugador = "";
    bool gameover = false;

    cout << R"(........................................................................................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................
...............................................ppppppppppppppppppppppppppp..............................................
..................................pppppppppppppppppppppppppppppppppppppppppppppppppp....................................
...........................pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp.............................
.......................ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp........................
..................ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp.....ppppppp...................
...............pppppppppppppppppp......pppppppppppppppppppppppppppppp....pppppppppppppp.........pppppppp................
............ppppp............pppp...../.ppppppppp....pppppppppppppp...../.pppp.....pppp..........ppppppppp..............
..........pppp..................p...../.......pp......ppp.......ppp...../.p..........p....///../..p......pppp...........
........pppp........................../...../..p...../............p...../................////////..........ppp..........
......ppppp........//////......./...../...../.pp...../................../.....////...//......./.............pppp........
......ppppp......../............./..../...../..p...../....////..../...../...../......./.............////../.ppppp.......
......pppp........//.pppp.////////..../...../..p...../..../.......//..../............./..//.....//.....////.pppppp......
......pppp........//.pppp............./...../.pp...../............./..../......////////../////..//..........pppppp......
......pppp........//.pppppp.........../...../......../...../////////..../....../../..//.../...../............ppppp......
......pppp........//.ppppp......./..../............../.....//../////..../............//........//../////.../.pppp.......
......ppppp......../............//..../........///////............//..../..../......//...///////....././/../.ppp........
......ppppp....................///..../...//////......p..........//...../....///////..ppp.......p........../..p.........
........pppp..................//.........../...ppppppppp..////////............/.....pppppppppppppp./.....///............
..........ppp..//...........///.p........../.ppppppppppppp........p.........../.ppppppppppppppppppp../////..............
............ppp..////////////..pp........../.pppppppppppppppppppppp.........../.ppppppppppppppppppppp...................
...............ppp.........pppppp.//////////.pppppppppppppppppppppp..//////////.pppppppppppppppppppppp..................
..................pppppppppppppppp...........pppppppppppppppppppppppppppppp....ppppppppppppppppppp......................
.......................pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp...........................
.............................pppppppppppppppppppppppppppppppppppppppppppppppppppppppppp.................................
....................................pppppppppppppppppppppppppppppppppppppppppppp........................................
..........................................................ppp...........................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................
........................................................................................................................)"<< endl;
   cout << "Hola, este es el juego de esperiencia CLUELESS. " << endl;
  cout << " Volvamos un poco a la experiencia y perspectiva de Cher en el momento de mas indecision o apuro." << endl;
  cout << " Juga un poco y deja que elijamos tu outfit del dia" << endl;
    cout << "Pedir nombre del jugadxr" << endl;
    cin >> nombreJugador;
    cout << "Bienvenidx" << nombreJugador << endl;

    int decision = 0;

    while (!gameover)
    {
        system("clear");

        cout << "eleccion parte de arriba" << endl;
        cout << "1.Remera \n 2.Saco \n 3.Chaleco \n 4.CropTop \n 5.Buzo" << endl;

        cin >> decision;
        switch (decision)
        {
        case Remera:
            prendaElegidaArriba = "Remera";
            prendaElegidaAbajo = "Jean";
            break;

        case Saco:
            prendaElegidaArriba = "Saco";
            prendaElegidaAbajo = "PantalonDeVestir";
            break;

        case Chaleco:
            prendaElegidaArriba = "Chaleco";
            prendaElegidaAbajo = "PantalonCargo";
            break;

        case CropTop:
            prendaElegidaArriba = "CropTop";
            prendaElegidaAbajo = "Bermuda";
            break;

        case Buzo:
            prendaElegidaArriba = "Buzo";
            prendaElegidaAbajo = "Pollera";
            break;
        }

        char confirmacion = '.';

        while (confirmacion != 'S' && confirmacion != 'N')
        {
            cout << "La maquina eligio dentro de las opciones, ¿Te gusto tu conjunto?" << endl;
            cout << prendaElegidaArriba << " con " << prendaElegidaAbajo << endl;
            cout << "Te gusto? S/N" << endl;

            cin >> confirmacion;

            confirmacion = toupper(confirmacion);

            if (confirmacion == 'S')
            {
                gameover = true;
            }
            else if (confirmacion == 'N')
            { cout << R"(                                                                                                                        
                                                                                                                        
                                                                                                                        
                                                                                                                        
                                                                                                               ..       
                                                                                                                        
                                                                                                                        
                                                               . ..      .                                              
                                                                      ..                                   ...''''.     
                                    .                                                        ..',;,'.   .'',''''...   . 
             .                                                              ;lc,';.    .    ,:,,,,,... :c,,,....'..   . 
                                              ..             .:lc;,.      ',,'',,.,    .    ,......'.. '........'..     
                      .       ....     .''.  ;:;'.   .      'c,',;...    ,.......,.'   .   .'......'.. '....'''';.      
                ''.         ;c:;''   ,c;,.. :'.'.'         .,.....,.;   '....'...'''   .   .;....',,'  '...;:,...       
      ..'.    ,:;..       .,'...''   ...'.. '..'.'         '......,.'.  '...;;l...''   .    .'...'..   '...'.'..''      
    .lc,..   .'..'.      .'.....',   '..,.. '..'..   ..   .'......'..' .'..''.o;..',   ..    .......   ,...,.,,,.,      
    .....'   ....'.     ......';;.   ...,.. '..'..   ..   .'........., .,..';.;x,,:.         .'.....   '....'..,.'      
    .....,   .....'    ....,,;;.     ...,.. '..'..   ..   ''..,,.....,  ,...''.'o,     . .    '.....   ........;,       
    .'...,.  .'...,   ....;.,,       ...''. '..''.   ..   '..'''...'.'   :;...;'.;.           '..'.'   .....,;,;        
    .'..,'.  .'...,   ...'...        ....'' '...'.   ..   ...'.'...'.'    .;;..,,.;.          '...''   ....;.'          
     '..,..   '...'  ...,'..  .''... ....''';...'.    .   ...,.'...'.'     ...,..,.:.         '...,'   .'..,.'.         
     '..,..  .'...'  '..;.. .:,,,,.' ....,..,...'.    .   ...,.''..'''   ;:;:. ;..'.,    .    ....;.,, .'..,...   .     
     ...'..  .'..',  ,..,.. ,....,.' ....'''....'.    .   '..;,;....,.  ,,,,.' '..'.,   ..    ,...,'....,..,..'         
     ...'..   '..',. ,..,.. '....,..............'..   .   ....'.....,.. '..''' '..'.'   ..   ,c.....,...,..''.'         
 .   ...,..   '..''. '..'.' ..''.;.. .'.........'..   .   ..........,.. ,...,'o;..'.'   ..   ;......'.. ,...,.,         
 .   ...,..   '...'  '....'.   '.,.'  '....',...'..   .   ....,,;...,.. '....,'...'..   .    '......,,  '...,,.         
 .   .'.,.'  .;..'.  '...'.'. .,.'.'  '..;,:.'..'..   .   ....,.,'..,.. .'.......':.    ..   ,.....':.  .,;,;.          
      ...,.,':,..'.  .'.......:,.'..  '..'.. '..'..   .   '...,,..'.,'.  ',.....;c.          .'.....                    
      ...;,';,...,.   '....,'''..'.   '..'., '..''.   .   ;,,,;. .:';.    .',,''                                        
      '...''.....;     ;.........c.   '..,;. ,',:.    .   ..      ..                                                    
      .;.......;l.      '''''''',.    ...'    ..      .                                                                 
       .,;;;;,,'           ....                                         .                                               
          ..                                                  ...    .                                                  
                    .                                                                                                   
                                                                                                                        
        ..   ..                                                                                                         
                                                                                                                        
                                                                                                                        
                                                                                                                        
                                                                                                                        )" ;
            }
            else
            {
                cout << "Perdon, esa opcion no la reconozco" << endl;
            }
            cout << "Eleccion parte de abajo" << endl;
            cout << "1.PantalonDeVestir \n 2.Pollera \n 3.Bermuda \n 4.Jean \n 5.PantalonCargo" << endl;

            cin >> decision;

            switch (decision)
            {

            case PantalonDeVestir:
                prendaElegidaAbajo = "PantalonDeVestir";
                break;

            case Pollera:
                prendaElegidaAbajo = "Pollera";
                break;

            case Bermuda:
                prendaElegidaAbajo = "Bermuda";
                break;

            case Jean:
                prendaElegidaAbajo = "Jean";
                break;
            case PantalonCargo:
                prendaElegidaAbajo = "Pantalon Cargo";
                break;
            }

            cout << "Elegiste estas opciones: " << endl;
            cout << prendaElegidaArriba << " con " << prendaElegidaAbajo << endl;
            cin.ignore().get();
            gameover = true;
        }
    }
    cout << R"(                                                                                             ...             .          
                                       .     .....    .....''                                                           
                                           lxO:''':  okl....:                         ..       ...............          
                             .cl,...       dxk:...:..xxl....:           .....''',,'        ,cdl''..........''c.         
         ...''',;            cxk,..',,,    xxk:...c. xxd....:          ,kkc.......;'      .xxxl..............;'         
      .;,,'.....;.   .  .    dxd.....';   .kxk;...:  dxx....:    ..    dxx,........;.      xxxo'...........',;,         
    .dxO,.......',          ,xk:.....c.   .kxx,...,..xkd....:    ..   ,xxd...,ddo...,      okxxdkkk,.....lddo:.         
     oxko........:  ........dxx'....,;    ,kxd'....',;;'....:    .    oxxc...;ckx'....          cxx:.....;              
     .dxx;.......,lxd,,'''.,kkc.....:     ;xxo..............:.   .   .xxx,...........'.         ;xko.....:              
      .xxd'.......ok,.......ox'....,.     :xxl.....,,'::,...;.   .   :xxd.....,;;.....,    ..   .xxd.....;.   .         
  .    :xxl.......':........,;......      cxxl....': .xxo...;.       dxkc....''dkc....,.   ..   .xxx.....,'   .         
        oxx;......................,       lxxl....:. .xxo...,.      .kxx,....' 'xx;....:    .    dxd.....',   .         
        'xxx,....................'.       lxxo....,  .xxo...'.      :xxo....';  cxx'...;'   ..   oxx......,             
         lxxd'.........:o........;    .   cxxx...'.  .xxo...'.      dxkl,,,,o'  .kOkkxol;   ..   oOOolcc:cl             
         .dxxd'........lk,......:.   ..   ;kkOccl:   .kkkc::c.     .cccloddo'    ...        ..    ....'''..             
          .xxkx:;;;,,,,lkd;;;;;c,    ..   .::;,'.     ;;;;;,.                                                           
           'ddollolllol.'ddooodc    .                           .                                                       
                                           ........                                                                     
         .                        .                                                                                     
                                   .                                                                                    
             .......''''''''''''       .',;.',;;,   .',,.....            .........          ',;:'',,,;,....'''.         
      .   'dx0;................;.      dkxx.....'. ,xxxl...',;c   ':'.',,''......,.   ..   .kxxk;.............,c,       
          ,kxO:................,'      :xxk'.....'.dxxx'.....c. .xxO:............':   ..   ,kxxk:...............:,      
      .   'kxO:......odxxxdddoc,.      .xxk:.....;cxxkc.....':  'xxk:.....'::::::cc   ..   ,kxxxc.......,,:xl'...c      
      .   .kxkc.....'dxdol;'.      .    dxxo.....lOxxx'.....:.  ,kxk:.....okxxxdl,    ..   'kxxxl.......;odxo'...l      
      .   .xxkl.....'.             .    cxxx'....:Oxkl.....,.   ,kxkc.....,..          .   .kxxxl...............;l      
      .   .xxxl......,...'    .     .   'xxk;....,kxx'.....'    ,kxxl.....;.....'    .      dxxxl..........'';:od.      
      .   .xxxo..........;.              dxxo....'xk:.....,     'kxxo...........;.   .      lxxxo.......ckxxxxd:        
      .    xxxd..........,,   .          lxxx'....o:.....,.     .kxxd...........''          :xxxo........;:.            
           dxxx'.....;lloc.   .          ,xxxc..........,.      .xxxx'....'ccccco:    ..    ;xxxo..........,'      .    
           dxxk,.....ckc'            .   .xxxd.........''        dxxx,....,olc:'.           ;xxxd.....;;.....,'         
           oxxk;.....''                   oxxk;.......';    .    oxxk:....,.  .......       cxxxd.....dkx:.....;,.      
           lxxkc......'.....',;,          ;xxxl.......:     ..   :xxxl.....''''''...,.      cxxxd.....lkxxo,.....,,     
           cxxxl...............;          .xxxx'.....:.          'xxxo..............':      .xxxx'....;Oxxxkl:clloo.    
       .   ;xxxo...............;.          ;kkOl::;,;:       .   .xkkkolllloooooddxdc'       xkOOxdddxx',okkxdlc:;      
       .   'kxxd.',;;::clllooodc            ;:;::cc:,             ;:::::::::::;,'..          .'',,,'..                  
           .kkOOkkkxxxxxxdolc,.                                                                                         
            ....                                                                                                        
                                                                                                                        
          ..    ...........                                                                                             )" ;
    return 0;
}

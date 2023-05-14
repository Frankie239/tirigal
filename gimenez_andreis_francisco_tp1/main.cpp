#include <iostream>
#include <random>
using namespace std;

int main()
{
    #pragma region ASCII ART
    const string ESTATUILLA = R"(OXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXKkxdox0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0Ool:;c;,,''';;clxO0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOxl,''.',:cc;:;,..'',;'',;oKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNk;',.'',',,;:;,,''''',,,,''.'':xXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx....,,,,;,:ddoloooc;::::,;,';;':,;0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNc'....';:cc:;dxxdxxl,,'';c,;:';'...'.kMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWc...,,,:;::ccldxdddxd:ccl;;:';'.,';',,;0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk...'',,,;::c::dxookdlolk::c;,';'.''.,,,dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk...;,';.'c;.;xxddokx:''dd:k:';;;.','.,,oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW,.;:;l;..:l,..'',;;.. ,d,::xldo:,'',,.,;cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl;'..:c;:x:c. .,,. .ldkxdkd:..';.';'xXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXd. ''..'..  'cc;  .''...;;. .::,oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMl.',.    .''.;c;,..   .';,,;;..WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNc'... .......,;,;..'''.',:c;' .XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXOo'..','....   .  ....''.......'lNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMX0xddl;'...'.;.  '.   .';. ......... .,.;:XMMMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWxl;':.    ..';.   ,.  .,lc. .... ..  ...',.....  ,;,l0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWWWWWWWWWWWWWWWWMWWMMMMMMMMMMMMNl;c.,:      ;:'.  ::....:oc. ..'' .....  ..'....    : .oWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWWWWWWWWWWWWWWWWWWMMMMMMMMMMMMMN..;  '     .c;   ;dl:'.,'..'...,l...',,..     oo    ;..lXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWWWWWWWWWWWWWWWWWWWWWWMMMMMMMMMWc.,  .   ..cl. .;xll:,.'   .,,:cd;.,'.:c.'.   :o'.. ...xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
KWWWWWWWWWMWWWMMMMMMMMMMMMMMMMMMMX..       ;c;.  :Oxldl,.    ..:oOd..  .l'..   ..'..'':NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW
ONNWWWWWWWWWWWWNWWWWNNNNNNWNNWWWWWK,...   .lc.   cOkddko.     .lkOo.   ::      ..  .':KWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
xKKXXXKKKKKKKKK00K0KKKKKKKKKKXXXXXXKl,'.   :c.   ,xxdxo'      .lkk:   .o.   .   ..'l0NNNNXXNWWWWWWWWWWWWWWWWWWWWNNNNXXXK
dkkkkO00OOOOOOOOOO0OOOOOOOkkO0OkkOOOOOo;..;.;'   .loddd,      'okd.   ,,..'cc.   .oNNNNXXNKKXXXXKKKKK0000000OOOOOOOOOOOO
okkkOOOOOkkkkOOkkkkkkkxxxkkkOOOkO000000d.':o;.    .lodoc.     ,dd:    'l'...:oc...;XKK000K00KKKKK00OO000OOkkkkkOkkkOOkkO
xOOOOOO00OO0OOkkOOOOOkkkkkOOOOOOOOOkkOOk;'  ,.      :ool;     'ol.     ',.  .'... .oOXXK0OXKkkO00KKK0O000K00000000KKKKKK
0WWWWWWWNNNNXXXXK00000000O0000OOO0OOkd;. '...  .'coc...'::.   .ll.  .,,'  ..';.. :'  .xXXXXXXXXXXXKKKKKXXXXXXXXXXXXXXNNN
0XXNXXXNNNXNNXNXXXNNXXXXXXXXKKKKXXX0Oo....      .,,,cl...,.    .'..:,..  .,'.',.  .'..,xKKXXKKOkxkxkxdxk0KNWN0000kxdxkkk
k00O0X0O0XOOxO0kOkO0Ok0KNXXXXXKXXXXN0dc..     .   ...,,,.   ....     ...   .'.     ',.:k0K00NKkO00KOdOKKK00NXxoodllll:;;
0WWWWWWWWWWNWNNNNNNNNNNXXNXXXXNXXXNNkxXo;;. ......,'...   ..,;,'      ............':;;kXXXX0kXN0ddodokKKOOkxOklclkKkdolc
okO0XNWWWWWNXXNWNNNNNNNXXXKK0NXXXXXKkXX0d;.......,'.,'. ...'''',... ..'.'',,.'.'..''..kKKKKKK0XNO:'';xNXocdxkxdkxlcKNXXX
oOKXNNWWWWWWWWWWWWWWWWWWNXKKX0K00OxkKXKkx:.  .......... ................;,'......... '000KOKXXKOKN0kkOKXKllKOclk0KKXXKKX
0WWWWWMWWWWWWWWWWWWWWNNNNNNNWNNNXXKKKKkkx:.      ............ ..........'........    ;XXOkOkk00OkONNXXXXXNWWWWXXNWWWWWWW
KWMWWWWMWWMWWWWWWWNNNNWWWWWWWNNNXXXKKKOOOd. .   .             . ...............      ,0KKKXNNNNNNWWWNNNNNXXXXXNWWWWWWWWN
KWWWWWWWWWWWWNXXXKXWXXKK0K00000O00OOON0Okx... ...        ...........'..'..........   :kKNWWWWK00KO0kdddoxxOXWMWXNNNXXXNN
0XXKKKNKKXXXK0XXNXXXOOO0000OdkkxkxkkOWXXXX0xdxkxkO0KK0KKKKXXKXXXXXXXKXXNKKKXXXKXXKK00X0KKNMMMMNXNO0KKOKOK000KKXxxxXXWWWW
ONMW00OX0000K00O00KOOOO000K0OOO0K0ddoNXXKXXKK0NOkKNNN0K00K000O0K0KKKKKXKK0K0K00K0KKKKKX0K0WMMMMW0xdlxdkkdxkkkkxkkoKXNXNN
)";
    const string DAGA = R"(                                                                                                                        
                                                                                                                        
                                                          .'.                                                           
                                                         'o::l.                                                         
                                                        'Oxo:dx.                                                        
                                                       .00kOldKO.                                                       
                                                       OXNNXxxXKO                                                       
                                                      cNWWNNNKXNKl                                                      
                                                      0NWWWWNXXXX0                                                      
                                                     .KNWWNWWNXKKK.                                                     
                                                     'NNWWWMWWWNXX'                                                     
                                                     .NWNWWWWNNNXX.                                                     
                                                     .XNWWWWWNNNX0                                                      
                                                      kNWWWWNWNNXo                                                      
                                                      :NWWWNWXNNX,                                                      
                                                      .XWWWWWWNNX.                                                      
                                                      .XNNWWWNNNX.                                                      
                                                      'NWWWMMWNNX,                                                      
                                                 ';,,'xNNXKKKKXNNx,:;:,.                                                
                                               .Oxx,cO000k0OO0OOO00d,odx'                                               
                                                ;xOOO0K0K0kkk0O0OOKOxxxc                                                
                                                 .;okxO0KK00kOOO0Okxo:.                                                 
                                                    :k0O000000OkOkkx.                                                   
                                                     oO00000kOkkOOO:                                                    
                                                     .xkOKOOkkOkOkc                                                     
                                                      :OO00Okxxkkd.                                                     
                                                       cO00kkkkxx'                                                      
                                                       .d0OOxxxx;                                                       
                                                        ,0Okkxxx.                                                       
                                                        .OOkkxxx.                                                       
                                                         kOkkxkx.                                                       
                                                         xOOkxxx.                                                       
                                                         oOOkkkk.                                                       
                                                        .0000kkkl.                                                      
                                                      ;dxOK0OdkOOxl.                                                    
                                                      ;ocol:dd:;;,o.                                                    
                                                       ..,;,'.                                                          
                                                         ..                                                             
                                                                                                                        
                                                                                                                        
)";
    const string LIBRO = R"(                                                                  ..';:l.                                               
                                                 ....',;:clodxkO00KKKKKKk.                                              
                              ....',;:cclodxkOO00KKKKKKKKKKKK000OOkkkkxkK0c                                             
                 .clcloddxkOO00000000000000OOOkkxxxkkdkxdkxdkdxkxkOxxxdkdOKk.                                           
              'cddx0K0O0O0OkxxdddddddxdodoldoodddOddkkdxdoxddkdxxoddoodxxxx00:                                          
           'okxdddolxKK0000d:lxxoodOdddoldooxddxdoodxkkddkxxkxoodoxlxdookxxoO0x.                                        
         'kKK0kdc::;cd0K0000OlodlollcoooodooddodokxOKKKK0O0OOxxxoododoododxxdx0O;                                       
         ;0KKkdooclc,co0KK0000olxdxodoodoooolodk0K00OOOkkxxxxxkOxlooodlldolxdxoO0d.                                     
          .oxkkxolldkkdloKKKKK0koxdddloocollolodO0ookOOOOxO000kxxkxxkOkkdoxldddld0O;                                    
            :xxxO0OdlcllccOXKKKK0odxxxldodoookOOkkox0kkkoc:lolcllccoodO00kddocxodlO0d.                                  
             .x0kxxkxxxdddlxKKKKK0xokoxoodoxk0KOdod::lc:clccoco;cllx0koxxxxdxxcoodcoOk,                                 
              .cd00kxxdolodllKKKKKKOoxxxdoddd0KKKxoOxOoddodkxkOxOOO000OOOOOOookl:doockOo                                
                ;kOOxdxoolodolOKKKKK0ddkdxld00ddxxdx000000000OOOkk0OOOOOOOOOOxlxd:llo:oOk'                              
                 .okkkxxdxddddcdXKKKKKkokdkooOOok00000000000OkxxxxOxkkxxdxdooodllxc:dolckOl                             
                   cxkOkxxdxdddloKXKKKK0oxkddcx0dd00kOOkkxkxxdoddokxdxxxkkkkkOOOdcxd:old:dOk'                           
                    ,xkkdkxdollol:OXKKKKKdlkdklo0xoxxkxxxxkkOkOOOxdoxOOOOOOOkkkxxxlokcldollO0l                          
                     .okkxdxdxdl::l0KKKK00kcdxxocxkld000OOOOOOOkxOxxdddodddldlddkxOdlkd:dodcx0x.                        
                       :dxOkdooxOOkodXXKK00OlcxokcoOdlkddlkOd:kkddoxdxkxkkkOOOOOOOOOkldkcoddloO0c                       
                        'loxO0Oxlcc:lxKXKK000d:ddoockxcxdkxkOOOOOOOOOOOOOOOOOOOOOOddxxdxOocdoxck0x.                     
                         .xkdooodllc,co0K00000kccdld:dkloOOOOOOOOOOOOOkOkdkdoddokxklx000koocoddlo00c                    
                          .;odddoooxOOkxdKKK00OOlcdooclkdcddddooOOklll;lc::cc;,;c,;dld00OxoolldoxlO0x.                  
                            'llxO0Oxdl:::cOXK00OOd:lllo:xxkOOOOdldc;;;,,;c;;;cddxkxlxkOOdolllocdddod00;                 
                             .xOdolcl::,,:lOXK00OOk:ldooclolxxOOkldoloxkOOOkdkO00Odo0kolccclclolldodlO0x.               
                              .:lc:lolocdldlxKK00OOOocolllcl:docxxxxdkxdoxxxxxxxxxkk00xolclcollloldxdox00,              
                                'lcloodoooxO00OKK00O0x:oddocdc::l;:c:ld0kO000000000Okxdlllcldllocc:olodlOKd.            
                                 .ooodk00OkxoldOKK0000Olldloclo:ll:lcccllokokdxO00Odoodooxdodlodokxookdl:k0O'           
                                   lO0xdoxxddcdco0K00000d:xoxl:lolcd:lolodlldododdlddokkodOdddlodlxddxkkO0000o          
                                    cxdoocodccc:coOK00000Ocokdx:c:llcdocddlkxodOdddooxodxdxxkOO0KKKKKK000kdoc;.         
                                     'xoollloolooox0KOO0000o:xdooldkxdxdcxdoxxdxxkOO0KKKKKKKKK00Oxdc;'.                 
                                      .lxddddkO0OkdoxK0kO0K0klllxxldxxxkOO0KKKKKKKKK00Okkxxxddxxkx.                     
                                        :OOOOxddoxdodOOK0O0KK0O0KKKKKKKKKKK0OOkkxxxdxxkO00KOkdl:;..                     
                                         ,dooxddOdxxddx0KOO0KKKKK00OkkxxxxxxkO00K0kxoc;'..                              
                                          .ldddodkOKK00O0KOkkkxxdodkO0KKOxol:,..                                        
                                            ;dkOOO0000KK000KK0xllllll,                                                  
                                             ;kkO0KK0Oxoc;'.     .,:::;.                                                
                                              .;'.                 .';:::,.                                             
                                                                      .,;;;;,.                                          
                                                                         .';;;;'.                                       
                                                                            .',;;;,..                                   
                                                                                 ......                                 
)";
    #pragma endregion
    // enum con los personajes para tenerlos organizados.
    enum personajes
    {
        Howard = 1,
        Lucien,
        Lydia,
        Faye,
    };

    enum objetos
    {
        Daga = 1,
        Libro,
        Estatuilla
    };

    int personaje = 0;
    int decision = 0;
    bool correcto = false;
    bool utilizado = false;
    int objetoElegido = 0;

    int vidasContrincante = 20;
    int vidasPersonaje = 20;
    float probavilidadAtaquePj = 0.7f;
    float provabilidadAtaqueContrincante = 0.5f;
    int tiradaD10 = 0;

    random_device random;
    default_random_engine semilla(random());

    uniform_real_distribution<float> tiradaAtaque(0.0f, 1.0f);

    cout << "Bienvenido a la aventura conversacional de la tragedia en el albergue" << endl;
    cout << "Howard" << endl;
    cout << "Lucien" << endl;
    cout << "Lydia" << endl;
    cout << "Faye" << endl;

    cin >> personaje;

    switch (personaje)
    {
    case Howard:
        // todo: Presentacion
        cout << "presentacion" << endl;
        // preguntar que parte de la habitacion le gustaria investigar

        cout << "Entras a la habitacion, que te gustaria ir a investigar?" << endl;
        cout << "biblioteca" << endl;
        cout << "escritorio" << endl;
        cin >> decision;
        if (decision == 1)
        {
            cout << "Te acercas a la biblioteca";
        }
        else if (decision == 2)
        {
            cout << "No ves nada relevante en el escritorio, pero faye se acerca y revisa energicamente una pila de sobres a tu lado. Decides ir a la biblioteca para dejarla sola. ";
        }

        cout << "al acercarte ves una biblioteca muy ornamentada en la cual hay dos querubines" << endl;
        while (!correcto)
        {
            cout << "Que decides hacer?" << endl;
            cout << "1. Abrir la biblioteca en busca de tus libros" << endl;
            cout << "2. Revisar mas de cerca los dos querubines" << endl;

            cin >> decision;

            if (decision == 1)
            {
                system("clear");
                cout << "Buscas tus libros, pero solo encuentras libros de ocultimos y enciclopedias. \n";
                cout << "Piensas que esto le podria interesar a Lucien" << endl;
            }
            else if (decision == 2)
            {
                system("clear");
                cout << "al revisar mas de cerca los Querubines, te das cuenta de que el de la derecha, esta un poco mas inclinado hacia arriba que el de la izquierda" << endl;
                cout << "Decides girarlo, y para tu sorpresa, se abre un cajon que antes no habias visto." << endl;
                cout << "Al abrirse el cajon, te das cuenta que hay 3 objetos." << endl;
                cout << "1. Una daga \n 2. Un libro en un idioma que no conoces \n 3. Una estatuilla humanoide" << endl;

                correcto = true;
                cin >> decision;

                switch (decision)
                {
                case Daga:
                    cout << DAGA << endl;
                    cin.ignore().get();
                    cout << R"(Con mi mano temblorosa, agarré la daga hecha de un metal oscuro y desconocido. Al sostenerla, sentí una extraña energía emanando del arma, una energía que parecía provenir de un lugar más allá de la comprensión humana. La hoja estaba afilada como una navaja, y la empuñadura estaba tallada en una forma extraña y siniestra.)" << endl;
                    objetoElegido = Daga;
                    break;
                case Libro:
                    cout << LIBRO << endl;
                    cin.ignore().get();
                    cout << "El libro";
                    objetoElegido = Libro;
                    break;
                case Estatuilla:
                    cout << ESTATUILLA << endl;
                    cin.ignore().get();
                    cout << "La estatuilla";
                    objetoElegido = Estatuilla;
                    break;
                }
            }
            else
            {
                cout << "No conozco ese caracter para este caso, diculpame!";
            }
        }
        break;
    case Lucien:
        cout << "Continuar";
        break;
    case Lydia:
        cout << "Continuar";
        break;
    case Faye:
        cout << "Continuar";
        break;
    }

    cout << R"(Observas con creciente fascinación mientras el cuerpo se levanta lentamente, como si estuviera siendo elevado por una fuerza sobrenatural. Las extremidades se alargaron, las articulaciones se retorcieron en formas imposibles, y la piel comenzó a brillar con un extraño resplandor sobrenatural.)" << endl;
    cin.ignore().get();
    // escena de pelea
    while (vidasContrincante > 0 && vidasPersonaje > 0)
    {
        system("clear");
        cout << "vida gardiner: " << vidasContrincante << endl;
        cout << "tus vidas: " << vidasPersonaje << endl;
        cin.ignore().get();
        float ataque = tiradaAtaque(semilla);

        if (ataque <= provabilidadAtaqueContrincante && vidasContrincante > 0)
        {
            cout << "Ataca gardiner" << endl;
            tiradaD10 = (random() % 10) + 1;
            vidasPersonaje -= tiradaD10;
            cout << "Te quito " << tiradaD10 << " de salud";
            cin.ignore().get();
        }

        else
        {
            cout << "gardiner le erra" << endl;
            cin.ignore().get();
        }

        if (vidasPersonaje > 0)
        {
            cout << "Que decidis hacer?" << endl;
            cout << "1. Atacar \n 2. Objeto" << endl;

            cin >> decision;

            switch (decision)
            {
                case 1:
                    ataque = tiradaAtaque(semilla);

                    if (ataque <= probavilidadAtaquePj)
                    {
                        cout << "Atacas vos" << endl;
                        tiradaD10 = (random() % 10) + 1;
                        vidasContrincante -= tiradaD10;
                        cout << "le restaste " << tiradaD10 << " de salud";
                        cin.ignore().get();
                    }

                    else
                        cout << "Vos le erras" << endl;
                        cin.ignore().get();
                        break;

                case 2:
                    if (objetoElegido == Daga && !utilizado)
                    {
                         system("clear");
                    cout << R"(Con un grito desgarrador, me lancé hacia mi objetivo, la daga brillando como una estrella en mi mano. La hoja encontró su objetivo con un sonido sordo y húmedo, y sentí una extraña satisfacción al sentir la sangre caliente brotar del cuerpo de mi enemigo. Pero la satisfacción se desvaneció rápidamente cuando me di cuenta de que el cuerpo que había atacado no era más que una ilusión, un espejismo creado por la mente malévola que me rodeaba.

                                Sin tiempo para lamentarme, me lancé de nuevo, la daga goteando con la sangre de mi enemigo imaginario. Hice un segundo corte en el aire, esta vez más fuerte y más decidido. La hoja cortó el aire como una serpiente una vez más, pero esta vez encontró su verdadero objetivo.  pero no lo mató. En lugar de eso, lo dejó gravemente herido, y pude ver el dolor en sus ojos mientras se tambaleaba hacia atrás.

                                Pero incluso mientras celebraba mi victoria, sentí que algo siniestro se estaba agitando dentro de mí. La daga parecía estar teniendo un efecto extraño en mi mente, como si estuviera desbloqueando algo oscuro y peligroso. Me di cuenta de que debía tener cuidado con el arma, ya que podría ser un portal a un mundo más allá de mi comprensión.)" << endl;
                        for (int i = 0; i <= vidasContrincante; i++)
                        {
                            tiradaD10 = (random() % 10) + 1;
                            vidasContrincante -= tiradaD10;
                        }

                        utilizado = true;
                        cin.ignore().get();
                    }
                    else if (objetoElegido == Libro)
                    {
                        cout << "comienzas a leer el libro que encontraste en la biblioteca" << endl;
                        cout << R"(Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin vitae magna id nulla consequat malesuada ac sit amet lectus. Nullam eu finibus risus, sed rutrum leo. Sed id diam metus. Aenean accumsan velit ante, ut fringilla tellus consectetur eget. Suspendisse potenti. Maecenas mauris magna, tincidunt id luctus placerat, bibendum pellentesque lacus. In ut lorem feugiat, hendrerit enim sed, iaculis lectus.)" << endl;
                        cout << "Gardiner, al no comprender el texto que le acabas de leer, sea porque es 1930 o porque no tiene conocimientos de programacion, se desconcentra y pierde puntos de probavilidad de ataque." << endl;

                        provabilidadAtaqueContrincante -= 0.2f;
                        cin.ignore().get();
                    }
                    else
                    {
                        cout << R"(Tomas la estatuilla hecha de un material desconocido y al mirarla a los ojos, sentiste una energía perturbadora que te llevó a través de una dimensión desconocida. La presencia maligna de la estatuilla parecía estar envolviéndolo todo, llevandote a un mundo peligroso e incomprensible donde la razón y la cordura no podían penetrar. Finalmente, la estatuilla se desvanece de tus manos mientras que lo poco que quedaba del señor gardiner salto por la ventana, estrellandose contra el piso.)" << endl;
                        cin.ignore().get();
                    }

                    break;
            }
        }
    }

    return 0;
}

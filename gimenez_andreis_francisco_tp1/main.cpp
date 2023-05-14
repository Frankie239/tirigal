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

    enum objetos
    {
        Daga = 1,
        Libro,
        Estatuilla
    };

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
    //todo: Add title and a logo

    system("clear");
    cout << R"(El aire en la pensión de Ma Shanks estaba enrarecido por la preocupación. La habitación del señor Gardiner había estado cerrada durante varios días, y nadie había visto ni oído nada de él desde entonces. Todos los inquilinos estaban inquietos, pero para ti, la situación era especialmente preocupante. Habías prestado unos libros al señor Gardiner que necesitabas recuperar, ya que tenías un comprador muy interesado en ellos.

Finalmente, no pudiste soportar la incertidumbre y decidiste entrar a la habitación. Al abrir la puerta, el fuerte olor a podredumbre te golpeó en la cara. La habitación estaba en penumbra y parecía que no había signos de lucha, pero cuando te acercaste al centro de la habitación, tu corazón se detuvo. Allí estaba el cadáver del señor Gardiner, tirado en el suelo sobre una lona, con terribles lastimaduras en forma de espiral que cubrían todo su cuerpo. 

Tu mente empezó a imaginar las peores posibilidades. ¿Qué había pasado en esa habitación? ¿Quién había hecho esto al pobre señor Gardiner? ¿Y por qué?.

Junto a ti se encontraba Faye, tu compañera de pensión. Ella estaba igualmente horrorizada ante la escena que se presentaba ante sus ojos, y te agarró del brazo para sostenerse. En la penumbra de la habitación, podías ver que su rostro estaba pálido y sus manos temblaban. Te preguntaste si habías tomado la decisión correcta al entrar en esa habitación. Pero ya era demasiado tarde para retroceder)"
         << endl;
    cout << "presiona enter para continar" << endl;
    cin.ignore().get();
    cout << "\nEntras a la habitacion, que te gustaria ir a investigar?" << endl;
    cout << "1. Biblioteca" << endl;
    cout << "2. Escritorio" << endl;
    cin >> decision;
    if (decision == 1)
    {
        cout << "Te acercas a la biblioteca..." << endl;
        cout << "presiona enter para continar" << endl;
        cin.ignore().get();
    }
    else if (decision == 2)
    {
        cout << "No ves nada relevante en el escritorio, pero faye se acerca y revisa energicamente una pila de sobres a tu lado. Decides ir a la biblioteca para dejarla sola. " << endl;
        cout << "Decides acercarte a la ornamentada biblioteca para ver si encuentras ahi tus libros." << endl;
        cout << "\nPresiona enter para continar" << endl;
        cin.ignore().get();
    }
    system("clear");
    cout << R"(El mueble de la biblioteca era una impresionante pieza de madera oscura, tallada con intrincados detalles y adornos. En la parte superior del mueble, se encontraban varias repisas, cada una abarrotada de libros de diferentes tamaños y colores.

Pero lo que más llamaba la atención del mueble era la puerta central de la vitrina, la cual estaba decorada con dos querubines tallados en relieve, uno a cada lado. Los querubines eran de tamaño real y parecían estar esculpidos con una precisión y detalle increíble.

Cada querubín tenía sus alas extendidas, como si estuvieran a punto de emprender el vuelo, y sus ojos miraban hacia el interior de la vitrina con una expresión curiosa y un poco misteriosa. No pudiste evitar sentir que los querubines te estaban observando, como si supieran más de lo que estaban dispuestos a revelar.

Te das cuenta que los dos querubines no estan del todo simetricos, sino que el derecho, esta levemente mas inclinado hacia arriba.)"
         << endl;
    while (!correcto)
    {
        cout << "Que decides hacer?" << endl;
        cout << "1. Abrir la biblioteca en busca de tus libros" << endl;
        cout << "2. Revisar mas de cerca los dos querubines" << endl;

        cin >> decision;

        if (decision == 1)
        {
            system("clear");
            cout << R"( Te adentras en la biblioteca del señor Gardiner, buscando con determinación los libros que había prestado y que necesitabas recuperar. Sin embargo, a medida que recorrias los estantes de madera oscura, fuiste notando que los títulos que encontrabas eran completamente distintos a los que habías venido a buscar. En lugar de encontrar los libros que habías prestado, tropezaste con tomos antiguos y polvorientos que hablaban de ocultismo y misterios prohibidos.

Al principio, te sentiste desconcertado y un poco perturbado por los títulos de los libros que estaba viendo, ya que muchos de ellos parecían tratar temas inquietantes como la invocación de espíritus, la alquimia y la brujería. )"
                 << endl;
            cout << "\nPresiona enter para continuar..." << endl;
            cin.ignore().get();
        }
        else if (decision == 2)
        {
            system("clear");
            cout << R"(Intrigado, empujas suavemente el querubín hacia la izquierda y, para tu sorpresa, sientes que se abría un pequeño cajón escondido detrás de él.

El cajón estaba perfectamente camuflado en el mueble, y te preguntaste cuántas veces habría pasado por alto esa pequeña abertura. Con un poco de esfuerzo, logras sacar el cajón de su escondite y lo abres cuidadosamente.

Dentro del cajón encontraste varios objetos extraños )"
                 << endl;

            cout << "\nPresiona enter para continuar..." << endl;
            cin.ignore().get();
            cout << "Al abrirse el cajon, te das cuenta que hay 3 objetos." << endl;
            cout << "1. Una daga \n2. Un libro en un idioma que no conoces \n3. Una estatuilla humanoide" << endl;

            correcto = true;
            cin >> decision;

            switch (decision)
            {
            case Daga:
                cout << DAGA << endl;
                cout << "\nPresiona enter para continuar..." << endl;
                cin.ignore().get();
                cout << R"(Con tu mano temblorosa, agarras la daga hecha de un metal oscuro y desconocido. Al sostenerla, sientes una extraña energía emanando del arma, una energía que parecía provenir de un lugar más allá de la comprensión humana. La hoja estaba afilada como una navaja, y la empuñadura estaba tallada en una forma extraña y siniestra.)" << endl;
                objetoElegido = Daga;
                break;
            case Libro:
                cout << LIBRO << endl;
                cout << "\nPresiona enter para continuar..." << endl;

                cin.ignore().get();
                cout << "Agarras el libro con dos manos, ves que el mismo esta en un idioma que no comprendes realmente, pero sientes una fuerte energia emanar del mismo." << endl;
                cout << "\nPresiona enter para continuar..." << endl;
                cin.ignore().get();
                objetoElegido = Libro;
                break;
            case Estatuilla:
                cout << ESTATUILLA << endl;
                cout << "\nPresiona enter para continuar..." << endl;

                cin.ignore().get();
                cout << "La estatuilla";
                objetoElegido = Estatuilla;
                break;
            }

            cout << "No sabes para que es o que lo que es, pero si sabes que sera mas importante mas adelante. Lo agarras" << endl;
            cout << "\nPresiona enter para continuar..." << endl;

            cin.ignore().get();
        }
        else
        {
            cout << "No conozco ese caracter para este caso, diculpame!";
        }
    }

    system("clear");
    cout << "Escuchas un ahullido viniendo de tus espaldas, se te eriza la piel al recordar que estas solamente con Gardiner y Faye en la habitacion. Te das vuelta y..." << endl;

    cout << "\nPresiona enter para continuar..." << endl;
    cin.ignore().get();

    cout << R"(Observas con creciente fascinación mientras el cuerpo se levanta lentamente, como si estuviera siendo elevado por una fuerza sobrenatural. Las extremidades se alargaron, las articulaciones se retorcieron en formas imposibles, y la piel comenzó a brillar con un extraño resplandor sobrenatural.)" << endl;
    cout << "Gardiner se abalanza sobre ti, haciendo ruidos sobrehumanos y tan horribles que jamas escuchaste. Comparable con el grito de una bestia agonizando." << endl;
    cout << "\nPresiona enter para continuar..." << endl;
    cin.ignore().get();
    // escena de pelea

    while (vidasContrincante > 0 && vidasPersonaje > 0)
    {
        system("clear");
        cout << "salud Gardiner: " << vidasContrincante << endl;
        cout << "salud Howard: " << vidasPersonaje << endl;
        cout << "\nPresiona enter para continuar..." << endl;
        cin.ignore().get();
        float ataque = tiradaAtaque(semilla);

        if (ataque <= provabilidadAtaqueContrincante && vidasContrincante > 0)
        {
            cout << "Ataca Gardiner" << endl;
            tiradaD10 = (random() % 10) + 1;
            vidasPersonaje -= tiradaD10;
            cout << "Te quito " << tiradaD10 << " de salud";
        }

        else
        {
            cout << "Gardiner le erra" << endl;
        }

        cout << "\nPresiona enter para continuar...";
        cin.ignore().get();

        if (vidasPersonaje > 0)
        {
            cout << "Que decidis hacer?" << endl;
            cout << "1. Atacar \n2. Objeto" << endl;

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
                }

                else
                    cout << "Vos le erras" << endl;
                break;

            case 2:
                if (objetoElegido == Daga && !utilizado)
                {
                    system("clear");
                    cout << R"(Con un grito desgarrador, te lanzaste hacia Gardiner, la daga brillando como una estrella en tu mano. La hoja encontró su objetivo con un sonido sordo y húmedo, y sentiste una extraña satisfacción al sentir la sangre caliente brotar del cuerpo de tu enemigo, quien se tambaleó hacia atrás gravemente herido.

Sin tiempo para lamentarte, lanzaste un segundo corte en el aire, esta vez más fuerte y más decidido. La hoja cortó el aire como una serpiente una vez más. 
Sentiste algo siniestro agitándose dentro de ti. La daga parecía estar teniendo un efecto extraño en tu mente, como si estuviera desbloqueando algo oscuro y peligroso. Te diste cuenta de que debías tener cuidado con el arma, ya que podría ser un portal a un mundo más allá de tu comprensión.)"
                         << endl;
                    for (int i = 0; i <= vidasContrincante; i++)
                    {
                        tiradaD10 = (random() % 10) + 1;
                        vidasContrincante -= tiradaD10;
                    }

                    utilizado = true;
                }
                else if (objetoElegido == Libro)
                {
                    cout << "comienzas a leer el libro que encontraste en la biblioteca" << endl;
                    cout << R"(Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin vitae magna id nulla consequat malesuada ac sit amet lectus. Nullam eu finibus risus, sed rutrum leo. Sed id diam metus. Aenean accumsan velit ante, ut fringilla tellus consectetur eget. Suspendisse potenti. Maecenas mauris magna, tincidunt id luctus placerat, bibendum pellentesque lacus. In ut lorem feugiat, hendrerit enim sed, iaculis lectus.)" << endl;

                    cout << "presiona enter para continar" << endl;
                    cin.ignore().get();
                    cout << "Gardiner, al no comprender el texto que le acabas de leer, sea porque es 1930 o porque no tiene conocimientos de programacion, se desconcentra y pierde puntos de probavilidad de ataque." << endl;

                    provabilidadAtaqueContrincante -= 0.2f;
                }
                else
                {
                    cout << R"(Tomas la estatuilla hecha de un material desconocido y al mirarla a los ojos, sentiste una energía perturbadora que te llevó a través de una dimensión desconocida. La presencia maligna de la estatuilla parecía estar envolviéndolo todo, llevandote a un mundo peligroso e incomprensible donde la razón y la cordura no podían penetrar. Finalmente, la estatuilla se desvanece de tus manos mientras que lo poco que quedaba del señor gardiner salto por la ventana, estrellandose contra el piso.)" << endl;
                }

                break;
            }

            cout << "\nPresiona enter para continuar..." << endl;
            cin.ignore().get();
        }

        system("clear");
        cout << R"(Gardiner te empujó hacia el marco de la ventana, su fuerza sorprendente para alguien de su edad. Lucharon cuerpo a cuerpo, forcejeando por el control mientras esquivaban los muebles y objetos de la habitación.

Finalmente, con un rápido movimiento, lograste empujar a Gardiner hacia atrás, justo en el borde del marco de la ventana. Aún luchando, ambos perdieron el equilibrio y cayeron por la abertura, agarrándose desesperadamente el uno al otro.
)" << endl;
        cout << "presiona enter para continar" << endl;
        cin.ignore().get();
        if (vidasContrincante <= 0)
        {
            cout << R"(En un momento de desesperación, te aferraste a la ventana y empujaste a Gardiner con todas tus fuerzas, sintiendo cómo se soltaba de tus manos y caía hacia el suelo de abajo. Te quedaste allí mirando hacia abajo mientras el cuerpo de Gardiner, o lo que quedaba de el, se estrellaba contra el pavimento con un ruido sordo y seco.)" << endl;
        }
        else if (vidasPersonaje <= 0)
        {
            cout << R"(En un momento de desesperación, intentaste aferrarte a la ventana para evitar la caída, pero Gardiner te empujó con todas sus fuerzas. Te sentiste caer por el aire, sin control sobre tu cuerpo, y con la sensación de que la muerte se acercaba rápidamente. Mientras caías, viste a Gardiner mirándote desde arriba, con una sonrisa siniestra en su rostro. Finalmente, sentiste el impacto contra el suelo con un fuerte golpe y todo se volvió oscuro.)" << endl;
        }

        cout << "\nFin de la aventura conversacional" << endl;
        cin.ignore().get();
    }

    return 0;
}

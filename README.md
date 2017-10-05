# CAPP - DIY-Tangible

## CAPP

CAPP ist ein Akronym f�r "CApacitive" - "Passive" - "Programmable" und bezeichnet damit die Eigenschaften des Tangibles, f�r das wir eine Selbstbau-Anleitung bereitstellen auf der [UXID-](http://uxid.informatik.hs-mannheim.de/portfolio/diy-tangible/)-Institusseite.
Das Tangible besteht aus einem Mikrocontroller (Particle Photon), der �ber eine drahtlose Schnittstelle verf�gt, und weiteren elektrotechnischen Bauteilen, wie bspw. einem Relay, ein elektromagnetischer Schalter, der durch den Photon gesteuert wird und dadurch f�r die Touchpunkt-Erzeugung zust�ndig ist: 
Das Relay ist n�mlich mit einem leitf�higen Stift (z.B. ein Metall-Pin) verbunden und leitet Strom auf diesen Pin (wenn der Photon den Status erh�lt), der beim Aufliegen auf ein kapazitives Display erkannt wird, da das Stromfeld des Displays dadurch ge�ndert wird.
Durch die Relays k�nnen Touchpunkt-Kombinationen generiert werden, die vom Display als Touchcodes interpretiert werden.


Dieses Repo umfasst die folgenden drei Komponenten, um CAPP zu realisieren:

- Photon IO: Code, der auf den Particle Photon aufgespielt werden muss. Der Particle Photon erh�lt �ber das Web-Interface Befehle und f�hrt diese aus. Der Photon ist im Tangible selber verbaut.

- TouchRecognition: Code, der auf Windows-Ger�ten installiert wird f�r die Touchpunkte-Erkennung und -Interpretierung. 

- Web Interface: Code f�r eine simple Webseite, �ber die der Particle Photon gesteuert wird.
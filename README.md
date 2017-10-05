# CAPP - DIY-Tangible

## CAPP

CAPP ist ein Akronym für "CApacitive" - "Passive" - "Programmable" und bezeichnet damit die Eigenschaften des Tangibles, für das wir eine Selbstbau-Anleitung bereitstellen auf der [UXID-](http://uxid.informatik.hs-mannheim.de/portfolio/diy-tangible/)-Institusseite.
Das Tangible besteht aus einem Mikrocontroller (Particle Photon), der über eine drahtlose Schnittstelle verfügt, und weiteren elektrotechnischen Bauteilen, wie bspw. einem Relay, ein elektromagnetischer Schalter, der durch den Photon gesteuert wird und dadurch für die Touchpunkt-Erzeugung zuständig ist: 
Das Relay ist nämlich mit einem leitfähigen Stift (z.B. ein Metall-Pin) verbunden und leitet Strom auf diesen Pin (wenn der Photon den Status erhält), der beim Aufliegen auf ein kapazitives Display erkannt wird, da das Stromfeld des Displays dadurch geändert wird.
Durch die Relays können Touchpunkt-Kombinationen generiert werden, die vom Display als Touchcodes interpretiert werden.


Dieses Repo umfasst die folgenden drei Komponenten, um CAPP zu realisieren:

- Photon IO: Code, der auf den Particle Photon aufgespielt werden muss. Der Particle Photon erhält über das Web-Interface Befehle und führt diese aus. Der Photon ist im Tangible selber verbaut.

- TouchRecognition: Code, der auf Windows-Geräten installiert wird für die Touchpunkte-Erkennung und -Interpretierung. 

- Web Interface: Code für eine simple Webseite, über die der Particle Photon gesteuert wird.
# DIY Vibro

Recherches pour la conception de modules accessibles pour faire vibrer n'importe quoi.
Pour le moment, trois objectifs:
* produire la documentation pour fabriquer un module minimal "r�cup" avec juste un transistor et un potentiom�tre, avec vibreur et alimentation de r�cup.
* concevoir et documenter un module vibrant connect� bas� ESP8266 contr�lant un ou plusieurs vibreurs.
* proposer une API et quelques exemples de code de contr�le sans fil par UDP.

## References et liens

Le [Fairy](https://www.neoplaisir.com/clitoridiens/1222-sextoy-clitoridien-fairy-lithium-sans-fil-1-4582272810281.html) semble �tre une bonne b�te, pour seulement 60 euros ! Un prix � concurrencer :)

Quelques [photos](http://alarme.asso.fr/forum/index.php?topic=9303.0) d'un timide d�montage du fameux Magic Wand.

Deux exemples de design de sex toy modulaire (seulement des projets de design, pas de commercialisation) : [InMe](https://www.masculin.com/sexualite/12456-sextoy-diy-inme/) et [Pillow Play](https://www.dezeen.com/2015/07/09/pillow-play-sex-toys-modular-vibrator-amber-defroand-brighton-university/)

## Journal de bord

01/02 : Montage de test avec une Teesy, simple et rapide, pour tester les combinaisons de transistor/resistance. Utilise le 5V de l'USB fournit par le pin VIN de la Teensy. La Teensy pourra ensuite �re remplac�e par une alimentation 5V et un transistor.

![Le montage](test_transistor/montage.jpg)
 
Test de 10 mod�les de transistors, qui peuvent �tre tri�s en quatre groupes selon leur comportement.
Le code applique successivement diff�rentes tensions diff�rentes sur le pin (via analogWrite()) pour v�rifier le comportement du moteur � diff�rentes tensions => je ne d�passais pas 150, refaire les tests avec le code corrig� !

TODO
* v�rifier la tension d'alim des moteurs de manette de jeu (12V ou 5V ?)
* faire un montage directement avec un potentiom�tre (lin�aire + log)

### Module "R�cup"

### Module "WiFi"

### Applis de contr�le
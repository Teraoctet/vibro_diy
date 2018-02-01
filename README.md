# DIY Vibro

Recherches pour la conception de modules accessibles pour faire vibrer n'importe quoi.
Pour le moment, trois objectifs:
* produire la documentation pour fabriquer un module minimal "récup" avec juste un transistor et un potentiomètre, avec vibreur et alimentation de récup.
* concevoir et documenter un module vibrant connecté basé ESP8266 contrôlant un ou plusieurs vibreurs.
* proposer une API et quelques exemples de code de contrôle sans fil par UDP.

## References et liens

Le [Fairy](https://www.neoplaisir.com/clitoridiens/1222-sextoy-clitoridien-fairy-lithium-sans-fil-1-4582272810281.html) semble être une bonne bête, pour seulement 60 euros ! Un prix à concurrencer :)

Quelques [photos](http://alarme.asso.fr/forum/index.php?topic=9303.0) d'un timide démontage du fameux Magic Wand.

Deux exemples de design de sex toy modulaire (seulement des projets de design, pas de commercialisation) : [InMe](https://www.masculin.com/sexualite/12456-sextoy-diy-inme/) et [Pillow Play](https://www.dezeen.com/2015/07/09/pillow-play-sex-toys-modular-vibrator-amber-defroand-brighton-university/)

## Journal de bord

01/02 : Montage de test avec une Teesy, simple et rapide, pour tester les combinaisons de transistor/resistance. Utilise le 5V de l'USB fournit par le pin VIN de la Teensy. La Teensy pourra ensuite êre remplacée par une alimentation 5V et un transistor.

![Le montage](test_transistor/montage.jpg)
 
Test de 10 modèles de transistors, qui peuvent être triés en quatre groupes selon leur comportement.
Le code applique successivement différentes tensions différentes sur le pin (via analogWrite()) pour vérifier le comportement du moteur à différentes tensions => je ne dépassais pas 150, refaire les tests avec le code corrigé !

TODO
* vérifier la tension d'alim des moteurs de manette de jeu (12V ou 5V ?)
* faire un montage directement avec un potentiomètre (linéaire + log)

### Module "Récup"

### Module "WiFi"

### Applis de contrôle
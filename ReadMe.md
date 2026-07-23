# Déplacement for chamber trio and EMG

## Atau Tanaka 2024

### Commission from the festival Ars Musica, Brussels
#### For the [Erämaa Trio](https://www.eramaatrio.com/)

* Akiko Okawa (viola)
* Cédric De Bruycker (bass clarinet)
* Quentin Meurisse (piano)

and [EAVI EMG](https://arxiv.org/abs/2409.20026) muscle sensing and Bela Pepper modular synthesizer. With programming and score preparation support by Francesco Di Maggio. Concert support by Cheryl Hui and Evan O'Donnell.

### ABOUT THIS REPOSITORY 
This repo gathers software for and documentation of the project. There are two ways to use the resources here:

1. Navigate like a website, clicking on folders and accesssing files. This will be useful for non-technical people to access documentation, the score, images, links to recordings and video.
2. Clone the repository using the green Clone button above. This will allow developers to have a live copy of the software on their machine, enable them to run the project, and eventually propose contributions


The software explored deploying sound synthesis patches, in particular, forms of granular synthesis on microcontroller and single board computer systems like the [OWL](https://www.openwarelab.org/), [Daisy](https://electro-smith.com/collections/daisy), [Bela](https://bela.io/), [Organelle](https://www.critterandguitari.com/organelle) and Raspberry Pi. The *Déplacement* piece itself runs on [Bela Pepper](https://bela.io/products/pepper/) and can easily be made to run on [Raspberry Pi](https://www.raspberrypi.com/).

Current contents of folders include:

#### /bela-BLE/
Code, test patches, and info on getting MIDI over Bluetooth LE running on the Bela. Link to Nathan Adam's repository for the ble_midi Linux daemon he developed.

The musical score for the piece, as well as sketches 

#### /documentation/
This folder contains a folder with the score and sketches, as well as links to video and audio recordings of the piece, as well as additional information in the form of diagrams, images, and texts.

#### /pd/
The [PD](https://puredata.info/) patches ready to load onto Bela

#### /max/
Max sources for different granular synthesisers and cloud generators that were later ported to PD to run on Bela.

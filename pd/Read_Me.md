# Déplacement PD patches

### ABOUT THIS FOLDER 
This contains Pure Data patches for the performance of the piece, and also provides a generic version of the patch for solo performance and further development. The patches are organised ready to download using the [Bela IDE] (https://bela.io/products/the-bela-ide/) to a [Bela Cape] (https://bela.io/products/legacy-hardware/)  in the [Pepper] (https://bela.io/products/pepper/) eurorack adaptor. 

To facilitate compilation for Bela, all dependencies are in a flat hierarchy. Simply open the **_main.pd** patch for each project. 

####dev/
This folder contains development patches and tests

* **eavi-3**: connecting three EAVIs to a PD patch on a computer
* **gran-livecloud**: the core granular cloud generator
* **granulator03**: a different, time stretching granulator (Sakonda)
* **hello-midi**: a Hello World patch for Bela Pepper
* **sakonca-mc**: a microcontroller port of Sakonda's Max based granulator

####performance-patches/
This folder contains the PD patches as used in the performance of Déplacement

##### **atau-solo**: 
This is the generalised version of the patch. Open `_main.pd` . 

The subpatcher `pd ble-midi` communicates via OSC with the ble-MIDI daemon running in the background (see bela-BLE folder). Then the `pd emg` subpatcher takes 14-bit hi-res pitchbend in from the EAVI-EMG board, provides direct sonified output, carries out envelope following (`eavi-rms`) for CV output and mapping to the rest of the patch. 

The `cloud-chan.pd` uses the `clone` object to generate multiple instandes of the `grain-cloud~` abstraction. 

The `grain-cloud~` abstraction is the granular synth voice and plays the buffer names in the 2nd argument, and applies a triangle window.

Playback of grains is controlled by `cloud-player2`. The `cloud-generator` abstraction is the stochastic grain trigger.

Mappings for EMG control of granular synth parameters are found in the subpatcher `pd mapper` that allows dynamic messaging to direct the EMG to various parameter destinations after being scaled. This allows a "score" of messages and cues to be created to direct the evolution of the piece. The compositional structure is thus found in the subpatcher `pd mappings`. 

##### instrumental patches
There are separate individual folders for each instrument in the trio, Bass clarinet; Viola; Piano. These folders are ready to load into the Bela-Pepper for each instrument.
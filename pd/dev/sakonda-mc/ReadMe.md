# Sakonda Granular for Microcontroller

These are PureData patches that simplify the Sakonda granular synthesizer patch to be deployed on a microcontroller based synthesizer system like the **OWL** (Rebel Tech **Genius** or Befaco **LICH**) or Daisy.

The granular synth voice is in the abstraction _'gran-part4.pd'_

Each other PD patch then tries a different number of voices: 2, 3, 4, 8, to see what will run within the DSP power of the microcontroller.

These were successfully deployed on the OWL3 board (Genius and updated LICH), and several workarounds were made to accommodate memory limitations. For this, the sample buffers are very short, and are embedded in the patch. This can hopefully be changed later to play longer buffers, and to load in soundfiles.

At the time of writing, I tried also to run this on a Daisy, but got errors that are seen in the file _'daisyerror.rtf'_

This is at the moment a proof-of-concept. The Stretch parameter works (1.0 = normal speed). The Transposition parameter is broken. Freeze is not yet implemented.

*Atau Tanaka
27 Feb 2023*
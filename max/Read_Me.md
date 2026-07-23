* **cipriani-giri-cloud**

	Max patches following Cipriani/Ghiri's [book](https://cycling74.com/projects/electronic-music-and-sound-design-for-max-8-volume-3) examples of a granular cloud generator, written by them in gen~ and ported by us to RNBO, and deployed on the Bela Pepper. This is the latest experimentation (advanced).  

* **granulator03**

	A port of [Sakonda-san](http://formantbros.jp/sako/download/)'s original Max granular time stretcher to PD by Adam Parkinson simplified to run on embedded systems. A good starting point. See also sakonda-mc below.

* **rnbo-pepper**

	Cloud generator using live input. Francesco Di Maggio's work in combining Ghiri's examples of the Cloud generator (above) and a circular buffer for realtime audio input. (super advanced)

* **sakonda-mc**

	My tests to reduce the number of overlapping grains and voices in Sakonda's granular (from granulator03 above) to stress test the microcontrollers. (Here mc means 'microcontroller', not 'multichannel'). They generate different errors from the [Heavy compiler](https://wasted-audio.github.io/hvcc/) depending on the [fork](https://github.com/enzienaudio/hvcc) used, whether the target is [Bela](https://learn.bela.io/tutorials/pure-data/advanced/using-the-heavy-compiler/), [OWL](https://www.openwarelab.org/PureData/), or [Daisy](https://github.com/malyzajko/daisy). 


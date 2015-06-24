# Virtual Reality Sickness Testrooms
> __Made with Unreal Engine 4__

__ Note: This branch does not include a visual representation of an avatar in the virtual environment __

## What is it?

This project was used to test the differences in the effects of virtual reality sickness whilst using an HMD and when adding an avatar to a virtual environment. Five different testrooms were specifically designed to invoke virtual reality sickness in the user. 

On the Github branch: [Master](https://github.com/ShaPOC/ue4-vrs-prototype) you will find the same test but __including__ the avatar. Both tests, on this and the [Master branch](https://github.com/ShaPOC/ue4-vrs-prototype), were run by a set of people to try and find a difference in virtual reality sickness symptoms when adding the avatar variable.

## What kind of testrooms?

The user has free movement throughout the test and will walk through a series of five testrooms. Every next room will only open once the tests in the previous rooms have been completed.

Each test room has some instructions for the user, E.G. follow a path or concentrate on a flying object. Once the user starts doing this, virtual reality sickness inducing factors will be applied in the background.

> Sidenote: The contents of the UI and therefore the instructions are momentarily written in Dutch.

### First room

The first room contains a path for the user to follow. The arrows (as seen below) are shown one at a time, pointing at the direction in which the next arrow will appear. This room is mainly a baseline for the data and a way for the user to familiarise itself with the controls and the environment.

![First room screenshot](https://raw.githubusercontent.com/ShaPOC/ue4-vrs-prototype/master/Extra/Room01.PNG)

### Second room

The second room contains a particle in the center on which the user must focus. During the user's focussing, the FPS will drop dramatically and ghosting (a low persistence) will be applied on purpose. Half way through the test, the user will experience 'head bobbing'. Head bobbing is a technique used by most games to simulate a walking sensation by moving the camera up and down whilst the character is walking. This is an absolute no-no when creating virtual reality content with an HMD as it will most likely induce virtual reality sickness.

![Second room screenshot](https://raw.githubusercontent.com/ShaPOC/ue4-vrs-prototype/master/Extra/Room02.PNG)

### Third room

Once the user enters the third room he will be put to a halt. He may no longer move freely and the room's lights will darken. The user is afterwards instructed to follow the flying particle by looking around rather than moving. The particle will fly fast and come close to the user forcing him / her to look around fast. In some cases this may also induce virtual reality sickness.

![Third room screenshot](https://raw.githubusercontent.com/ShaPOC/ue4-vrs-prototype/master/Extra/Room03.png)

### Fourth room

The fourth room has the same arrows and instructions as the first one. Follow the path and reach the end. This time however, speed up and slow down arrows are added to the path which will double or half the speed of the user once he / she passes them. A rapid change of speed is a sure fire way to induce virtual reality sickness in most.

![Fourth room screenshot](https://raw.githubusercontent.com/ShaPOC/ue4-vrs-prototype/master/Extra/Room04.png)

### Fifth room

The fifth and final room is the most intense. The user is lured towards the center of the room as he / she keeps following arrows on the floor. Once in the center, the user is once again put to a stop and can no longer move freely. A new particle appears, starts flying around and the user is once again instructed to follow it by looking around. This time however, the user's chair is slowely turning with the particle to make a total of 5 spins. This slow turning is stopped and continued up to 4 times to confuse the user while still following the particle with it's head.

![Fifth room screenshot](https://raw.githubusercontent.com/ShaPOC/ue4-vrs-prototype/master/Extra/Room05.png)

## Prerequisites

For this test to work as intended, a few hardware components and a strong and steady system is required. It's extremely important that the system has enough power to reach at least 75fps when using an HMD.

### Hardware

> * HOTAS, which is a Joystick and a Throttle
> * Chair which can lean back a little
> * Kinect v2
> * HMD (E.G. the Oculus Rift)

### System requirements

Tested:

> * CPU: Intel Core i5-4690K @ 3.50Ghz
> * GPU: NVIDIA GeForce GTX 970
> * Memory: 8 GB RAM
> * Free space: 1.1 GB
> * OS: Windows 8.1 - 64 bit

Requirements according to Epic Games:

>__Recommended__
> * CPU: Quad-core Intel or AMD, 2.5 GHz or faster
> * GPU: NVIDIA GeForce 470 GTX or AMD Radeon 6870 HD series or higher
> * Memory: 8 GB RAM
> * Free space: 1.1 GB
> * OS: Windows 7/8 64-bit or Mac OS X 10.9.2

## Test setup

The avatar in the test is placed in chair which is slightly slanted. Furthermore, the controls (HOTAS) were needed to be placed within sight to ensure the user's ability to subconsciously notice the avatar whilst performing the tests. Therefore the controls must be placed quite high in the real world to simulate the same environment.

The avatar in the virtual environment looks like this;

![The avatar](https://raw.githubusercontent.com/ShaPOC/ue4-vrs-prototype/master/Extra/Avatar.PNG)

So the best course of action is to place the user within sight of the Kinect as follows;

![Kinect User Position from the side](https://raw.githubusercontent.com/ShaPOC/ue4-vrs-prototype/master/Extra/SittingSide.png) ![Kinect User Position from the top](https://raw.githubusercontent.com/ShaPOC/ue4-vrs-prototype/master/Extra/SittingTop.png)

> __it's incredibly important that the front of the user is not blocked! The Kinect must have a full view of the user__

## Tools

To be able to register the amount of virtual reality sickness induced by the test, you will be needing a few tools. The questionnaire and the webserver are created specifically for this test. The Node Muse N.P.M. module is created as a general purpose module to use Muse with Node.js.

> * [Virtual Reality Sickness Questionnaire Without Avatar (Dutch language)](https://docs.google.com/forms/d/19Y5-UpyXkmLqzUtViQppEa5XW6hRYLLu94dVH001eac/edit?usp=sharing)
> * [Virtual Reality Sickness Questionnaire With Avatar (Dutch language)](https://docs.google.com/forms/d/1bW2TBKaNqKfM5D9Sc4VNicGK1YdWI-hwaczgDeCntX8/edit?usp=sharing)

> * [Virtual Reality Sickness Muse Webserver](https://github.com/ShaPOC/virtual-reality-sickness-muse)
> * [Node Muse](https://www.npmjs.com/package/node-muse)

### Muse

The Muse is a brainwave band capable of reading EEG signals and specific movements in face muscles. 
More information can be found here: [Muse](http://www.choosemuse.com/)

## Included with this project

For convenience the plugins; Kinect4Unreal, LeapMotion and JoystickPlugin are included with the project. __These are not created by me!__ They can be found in the plugins folder. Also the .dll drivers and resources for the leap motion are included within the Binaries and Build folder. 

The __Maya folder__ contains the models used in the project as .mb (Maya) files and the .fbx file as derived from them and used within the Unreal Engine 4 project. 

## How about a license of some sort?

Licenses for each plugin used are included with the plugin itself.
For everything else a GPLv3 license applies.

GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007
As seen here: [GPLv3 License](./LICENSE)

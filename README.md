# VEX-Auton-20123A
This is for the Vex 2025-26 game, team 20123A. It's an absolute positioning system that uses odometry algorithms to move the robot based on relative Cartesian coordinates. This is a great advantage for the autonomous skills challenges and the autonomous period.

# What
**Odometry in VEX V5: Detailed, Snappy Explanation**

Odometry is a method of **tracking a robot’s position (x, y) and orientation (heading)** on the field in real-time using wheel encoder data. It allows the robot to know exactly where it is without external sensors like GPS or cameras.

### 🔧 Core Concept:

It measures **how far each wheel has rotated** and uses that to calculate:

* **Forward/backward movement** (from tracking wheel or drive wheel encoders)
* **Side-to-side (lateral) movement** (using a perpendicular tracking wheel if available)
* **Rotation** (based on differences in wheel distances, or by tracking changes in orientation with multiple encoders)

### 📏 What You Track:

* **Left wheel encoder distance (∆L)**
* **Right wheel encoder distance (∆R)**
* *(Optional)* Perpendicular (strafe) tracking wheel distance (∆S)

---

### 🧮 Key Calculations:

1. **Robot movement (arc or straight):**
   Difference between left and right wheel distances tells you if the robot moved straight or turned.

2. **Heading (θ):**
   Calculate how much the robot turned using:

   ```
   Δθ = (ΔR - ΔL) / TrackWidth
   ```

   *TrackWidth = distance between the left and right tracking wheels.*

3. **Position update:**
   Use trigonometry to update the robot’s x and y based on movement and heading:

   ```
   x += local forward movement * cos(θ) - local strafe movement * sin(θ)
   y += local forward movement * sin(θ) + local strafe movement * cos(θ)
   ```

---

### 🔑 Why It Matters in VEX:

* Enables **precise autonomous movement**.
* Supports **complex path-following** like Pure Pursuit.
* Eliminates the guesswork of “drive for 2 seconds” style code.
* Essential for consistent, high-accuracy autonomous routines.

---

### 🚀 In VEX V5 You Typically Use:

* 2 or 3 tracking wheels with encoders (powered or unpowered).
* Drivetrain encoders can also be used but are less accurate due to slippage.
* VEX V5 rotation sensors or integrated motor encoders.

---

### ⚡ Quick Summary:

**Odometry = tracking position + heading using wheel movement data.
It gives live robot coordinates for precision autonomous control.**



## Our approach 
We are planning on using the **OkapiLib PROS Library**, which contains a detailed guide and simplified functions to create Odometry for VEX V5.
This can be done using C or C++; we use C for convenience.
This is our main plan if our read and replay code fails.

## Links
https://www.youtube.com/watch?v=GEZBYHVHmFQ&pp=ygUIb2RvbWV0cnk%3D -> explains what odometry is

https://okapilib.github.io/OkapiLib/md_docs_tutorials_walkthrough_odometry.html -> Odometry code tutorial.

https://pros.cs.purdue.edu/v5/index.html -> the framework used to code this.

https://pros.cs.purdue.edu/v5/api/c/rotation.html -> implementing rotation sensors.

https://wiki.purduesigbots.com -> A handy site, the Bible of VEX, with answers to almost everything VEX


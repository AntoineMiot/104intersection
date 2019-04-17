# 104intersection

Epitech project - Module Mathematique

Subject :

To create synthesis images (when doing ray tracing, for example), potential intersection points between light rays and scene objects (here cylinders, spheres and cones) must be computed. This is exactly what you have to do in this project.

To do so, you need to write a 3 dimensional equation of the considered surface, and inject into it the equa- tion of the straight line representing the light ray. You’ll get a quadratic equation, with 0, 1, 2 or an infinite number of solutions that will give you the intersection points coordinates.

The straight line is defined by the coordinates of a point by which it passes through and the coordinates of a parallel vector.

O being the origin of the coordinate system, and X, Y and Z the axis, the surfaces that must be handled in this project are:
- O-centeredspheres,
- Cylinders of revolution around Z axis,
- Cones of revolution around Z axis which apex is O.

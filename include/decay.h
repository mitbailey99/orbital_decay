/**
 * @file decay.h
 * @author Mit Bailey (mitbailey99@gmail.com)
 * @brief Orbital Decay Simulation Program
 * 
 * Based on the SATELLITE ORBITAL DECAY program written in QuickBASIC presented in
 * https://www.sws.bom.gov.au/Category/Educational/Space%20Weather/Space%20Weather%20Effects/SatelliteOrbitalDecayCalculations.pdf
 * 
 * @version 0.1
 * @date 2021.06.01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define EARTH_RADIUS 6378000 // Radius of the Earth in meters.
#define EARTH_MASS 5.98e24 // Mass of the Earth in kilograms.
#define GRAVITATIONAL_CONSTANT 6.67e-11
#define PI 3.1415926
#define KARMAN_LINE 100000 // Minimum possible altitude in meters.

void decay_calculate(double satellite_mass, double satellite_area, double altitude_initial, double solar_radio_flux, double geomagnetic_a_index, int delta_time);

void decay_calculate_old(double M, double A, double H, double F10, double Ap);
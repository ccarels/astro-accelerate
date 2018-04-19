#ifndef __ASTROACCELERATE_SPS_PARAMETERS__
#define __ASTROACCELERATE_SPS_PARAMETERS__

class SPS_Parameters {
public:
	// Constants
	float max_boxcar_width_in_sec;
	float sigma_cutoff;
	// Switches
	int candidate_algorithm;
	
	SPS_Parameters(float t_max_boxcar_width_in_sec, float t_sigma_cutoff, int t_candidate_algorithm){
		max_boxcar_width_in_sec  = t_max_boxcar_width_in_sec;
		sigma_cutoff             = t_sigma_cutoff;
		candidate_algorithm      = t_candidate_algorithm;
	}
};

#endif

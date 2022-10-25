

//wired to gpio

#ifndef _NPISO_H_
#define _NPISO_H_
#include "adapter/adapter.h"

void npiso_meta_init(struct generic_ctrl *ctrl_data);// set an ID for de controler, set the case for the controler for the respective console and 
																		//set the structur for the bottons accordenly the numbers of botton will be used
void npiso_init_buffer(int32_t dev_mode, struct wired_data *wired_data);//set the modes that will be workingin the adapter (Nes/Snes)
																		//according to the mode get the data buttons and maped 
void npiso_from_generic(int32_t dev_mode, struct generic_ctrl *ctrl_data, struct wired_data *wired_data);// take tho mode it will work(for what consol version Nes/Snes)
																										//once the mode is set take the data recived and maped according the structure
																										//sent the data to gpios
																										


#endif /* _NPISO_H_ */
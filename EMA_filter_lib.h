/**
 ******************************************************************************
 *  @file EMA_filter_lib.h
 *  @brief Экспоненциально взвешенное скользящее среднее/ Фильтр низких частот
 *  (англ. exponential moving average, англ. EMA Filter LOW-PASS)
 *  @author Волков Олег
 *  @date 21.11.2024
 *
 ******************************************************************************
 * @attention
 *
 *  Библиотека помогает отфильтровать данные с АЦП,
 *  приведя показания к более устойчивым.
 *  Простой и быстрый фильтр НЧ для float чисел.
 *
 *  YouTube: https://www.youtube.com/channel/UCzZKTNVpcMSALU57G1THoVw
 *  GitHub: https://github.com/Solderingironspb
 *  Группа ВК: https://vk.com/solderingiron.stm32
 *
 ******************************************************************************
 */

#ifndef INC_EMA_FILTER_LIB_H_
#define INC_EMA_FILTER_LIB_H_

typedef struct{
	float alpha; //Коэффициент Альфа
	float out;
} EMA_Filter;

void EMA_FILTER_Init(EMA_Filter *filter, float alpha);
void EMA_FILTER_SetAlpha(EMA_Filter *filter, float alpha);
float EMA_FILTER_GetValue(EMA_Filter *filter, float input);

#endif /* INC_EMA_FILTER_LIB_H_ */

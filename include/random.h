/***************************************************
 * FILENAME :    random.h
 * 
 * DESCRIPTION :
 *     
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_RANDOM_H_
#define _LIBDL_RANDOM_H_

#include <tamtypes.h>

/*
 * NAME :    rand
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
int rand(int mod);

/*
 * NAME :    randVector
 * 
 * DESCRIPTION :
 *       Returns a vector where the first three components are between +- unitLen.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
u128 randVector(float unitLen);

/*
 * NAME :    randVectorRangeNeg
 * 
 * DESCRIPTION :
 *       Returns a vector where the first three components are between [min, max] or [-min, -max]
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
u128 randVectorRangeNeg(float min, float max);

/*
 * NAME :    randVectorRange
 * 
 * DESCRIPTION :
 *       Returns a vector where the first three components are between [min, max]
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
u128 randVectorRange(float min, float max);

/*
 * NAME :    randRange
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
float randRange(float min, float max);

/*
 * NAME :    randRangeNeg
 * 
 * DESCRIPTION :
 *       Returns a value between [min, max] or [-min, -max]
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
float randRangeNeg(float min, float max);

/*
 * NAME :    randRangeInt
 * 
 * DESCRIPTION :
 *       Returns a value between [min, max]
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
int randRangeInt(int min, int max);

/*
 * NAME :    randRangeInt
 * 
 * DESCRIPTION :
 *       Returns a value between [min, max]
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
float randRadian(void);

/*
 * NAME :    randSeed
 * 
 * DESCRIPTION :
 *       
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 */
void randSeed(int seed);

#endif // _LIBDL_RANDOM_H_

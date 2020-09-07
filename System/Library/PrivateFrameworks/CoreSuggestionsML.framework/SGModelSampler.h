/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASRng;

@interface SGModelSampler : NSObject {

	double _positiveRate;
	double _negativeRate;
	_PASRng* _rng;

}
-(BOOL)shouldSampleForLabel:(id)arg1 ;
-(id)initWithPositiveRate:(double)arg1 negativeRate:(double)arg2 rng:(id)arg3 ;
@end

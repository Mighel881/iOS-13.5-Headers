/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHAP/CoreHAP-Structs.h>
@class NSDictionary;

@interface ATVModel : NSObject {

	NSDictionary* _atvLUT;

}

@property (retain) NSDictionary * atvLUT;              //@synthesize atvLUT=_atvLUT - In the implementation block
+(void)addTuple:(id)arg1 ToLUT:(id)arg2 ;
+(unsigned long long)atvStateFromState:(BTStatus*)arg1 ;
-(id)init;
-(NSDictionary *)atvLUT;
-(id)findTupleForATVState:(unsigned long long)arg1 ;
-(void)setAtvLUT:(NSDictionary *)arg1 ;
@end

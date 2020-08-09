/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKElasticFunction : NSObject {

	double _currentValue;
	double _elastic;
	double _oldForce;
	double _velocity;
	double _friction;
	double _tension;

}

@property (assign,nonatomic) double friction;                //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double tension;                 //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double input;                   //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,readonly) double output; 
@property (nonatomic,readonly) double velocity; 
+(id)functionWithTension:(double)arg1 friction:(double)arg2 initialValue:(double)arg3 ;
-(id)init;
-(double)input;
-(void)step;
-(double)velocity;
-(void)setInput:(double)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(double)tension;
-(void)setTension:(double)arg1 ;
-(double)output;
@end

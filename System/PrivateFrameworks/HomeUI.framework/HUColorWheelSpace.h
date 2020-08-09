/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUColorWheelSpace <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long mirroringBiasAxis; 
@optional
-(unsigned long long)mirroringBiasAxis;
-(void)setMirroringBiasAxis:(unsigned long long)arg1;

@required
-(unsigned long long)type;
-(UIEdgeInsets*)colorForCoordinate:(CGSize)arg1;
-(CGSize*)coordinateForColor:(UIEdgeInsets)arg1 isValid:(out BOOL*)arg2;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedWalkingRouteLeg;

@interface MNTransitWalkingLegInstruction : MNTransitInstruction {

	GEOComposedWalkingRouteLeg* _walkingLeg;

}

@property (nonatomic,readonly) GEOComposedWalkingRouteLeg * walkingLeg;              //@synthesize walkingLeg=_walkingLeg - In the implementation block
+(id)instructionForWalkingLeg:(id)arg1 context:(long long)arg2 ;
-(id)instructionSet;
-(id)overridenInstructionsMapping;
-(id)initWithWalkingLeg:(id)arg1 context:(long long)arg2 ;
-(GEOComposedWalkingRouteLeg *)walkingLeg;
@end


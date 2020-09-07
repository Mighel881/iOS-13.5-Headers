/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/EquationKit.framework/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <TSReading/EQKitBox.h>

@interface EQKitHSpace : EQKitBox {

	double mWidth;

}

@property (nonatomic,readonly) double width; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithWidth:(double)arg1 ;
-(double)width;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
@end

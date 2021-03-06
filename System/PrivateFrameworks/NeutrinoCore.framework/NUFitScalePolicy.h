/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUScalePolicy.h>

@class NSString;

@interface NUFitScalePolicy : NSObject <NUScalePolicy> {

	SCD_Struct_NU7 _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(id)initWithTargetPixelSize:(SCD_Struct_NU7)arg1 ;
-(SCD_Struct_NU7)scaleForImageSize:(SCD_Struct_NU7)arg1 ;
@end


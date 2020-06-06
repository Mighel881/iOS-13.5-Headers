/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSString;

@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput {

	NSString* __name;

}

@property (nonatomic,copy) NSString * _name;                      //@synthesize _name=__name - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
+(id)videoFileInputWithName:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)plistDictionary;
-(id)initWithPlistDictionary:(id)arg1 ;
-(BOOL)isVideoFile;
-(unsigned long long)trackingType;
-(BOOL)supportsExpressions;
-(void)set_name:(NSString *)arg1 ;
@end

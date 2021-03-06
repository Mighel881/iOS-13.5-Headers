/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface LPImageProperties : NSObject <NSCopying> {

	NSString* _accessibilityText;
	long long _type;
	UIColor* _overlaidTextColor;

}

@property (nonatomic,copy) NSString * accessibilityText;               //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (assign,nonatomic) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIColor * overlaidTextColor;              //@synthesize overlaidTextColor=_overlaidTextColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)accessibilityText;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIColor *)overlaidTextColor;
-(void)setOverlaidTextColor:(UIColor *)arg1 ;
@end


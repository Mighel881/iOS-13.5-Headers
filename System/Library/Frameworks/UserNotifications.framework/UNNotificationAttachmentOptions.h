/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)optionsForFamily:(unsigned long long)arg1 fromOptionsDictionary:(id)arg2 ;
+(Class)optionsClassForFamily:(unsigned long long)arg1 ;
+(id)optionsFromOptionsDictionary:(id)arg1 ;
+(id)optionsClasses;
+(CGRect)santizedClippingRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

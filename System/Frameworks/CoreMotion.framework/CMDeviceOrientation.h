/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMDeviceOrientation : CMLogItem {

	int fOrientation;

}

@property (nonatomic,readonly) int orientation; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)orientation;
-(id)initWithOrientation:(int)arg1 andTimestamp:(double)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSCharacterSet;

@interface _HKCFGCharacterSequenceTerminal : _HKCFGTerminal {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,copy) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
-(id)_label;
-(NSCharacterSet *)characterSet;
-(unsigned long long)_minimumLength;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
@end

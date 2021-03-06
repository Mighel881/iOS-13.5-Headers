/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRLTBrailleString;

@interface BRLTBrailleBuffer : NSObject <NSCopying> {

	BRLTBrailleString* _brailleString;
	unsigned long long _cursor;

}

@property (nonatomic,readonly) BRLTBrailleString * brailleString; 
@property (assign,nonatomic) unsigned long long cursor;                        //@synthesize cursor=_cursor - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)cursor;
-(void)setCursor:(unsigned long long)arg1 ;
-(id)initWithBrailleString:(id)arg1 ;
-(void)insertBrailleChar:(id)arg1 ;
-(void)deleteBrailleChar;
-(BRLTBrailleString *)brailleString;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TMLAttributedStringJSExports.h>

@class NSString, NSMutableAttributedString, NSAttributedString;

@interface TMLAttributedString : NSObject <NSCopying, TMLAttributedStringJSExports> {

	NSMutableAttributedString* _attributedString;

}

@property (nonatomic,retain) NSString * string; 
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(void)initializeJSContext:(id)arg1 ;
+(id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 ;
-(id)init;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(CGSize)size;
-(id)initWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(id)attributedStringWithAttachment:(id)arg1 ;
-(id)NSAttributedString;
-(id)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 ;
@end

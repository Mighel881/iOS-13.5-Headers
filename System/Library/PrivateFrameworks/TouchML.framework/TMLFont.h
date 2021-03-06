/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLFontJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, UIFontDescriptor;

@interface TMLFont : NSObject <TMLFontJSExports, NSCopying> {

	UIFont* _font;
	UIFontDescriptor* _fontDescriptor;

}

@property (nonatomic,readonly) CGFontRef CGFontRef; 
@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) double pointSize; 
@property (nonatomic,readonly) double ascender; 
@property (nonatomic,readonly) double descender; 
@property (nonatomic,readonly) double capHeight; 
@property (nonatomic,readonly) double xHeight; 
@property (nonatomic,readonly) double lineHeight; 
@property (nonatomic,readonly) double leading; 
+(void)initializeJSContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
-(NSString *)fontName;
-(double)pointSize;
-(double)xHeight;
-(double)descender;
-(double)ascender;
-(double)lineHeight;
-(double)leading;
-(double)capHeight;
-(id)initWithFontDescriptor:(id)arg1 ;
-(id)initWithFont:(id)arg1 ;
-(id)bold;
-(id)italic;
-(id)withWidth:(double)arg1 ;
-(id)UIFontValue;
-(id)withSize:(double)arg1 ;
-(id)withFamily:(id)arg1 ;
-(id)withWeight:(double)arg1 ;
-(id)withSymbolicTraits:(unsigned)arg1 ;
-(id)withAttributes:(id)arg1 ;
-(id)withStyle:(id)arg1 ;
-(id)withAXRestrictedStyle:(id)arg1 ;
-(id)withScale:(double)arg1 ;
-(id)withScaleTransform:(double)arg1 ;
-(CGFontRef)CGFontRef;
@end


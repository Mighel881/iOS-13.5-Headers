/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLCompileOptions.h>

@class NSDictionary, NSString;

@interface MTLCompileOptionsInternal : MTLCompileOptions {

	BOOL _userSetLanguageVersion;
	NSDictionary* _preprocessorMacros;
	BOOL _fastMathEnabled;
	BOOL _glBufferBindPoints;
	BOOL _tracingEnabled;
	BOOL _debuggingEnabled;
	unsigned long long _languageVersion;
	BOOL _compileTimeStatisticsEnabled;
	NSString* _additionalCompilerArguments;
	unsigned char _sourceLanguage;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTracingEnabled:(BOOL)arg1 ;
-(void)setDebuggingEnabled:(BOOL)arg1 ;
-(void)setFastMathEnabled:(BOOL)arg1 ;
-(void)setLanguageVersion:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)preprocessorMacros;
-(BOOL)fastMathEnabled;
-(unsigned long long)languageVersion;
-(BOOL)tracingEnabled;
-(BOOL)glBufferBindPoints;
-(BOOL)debuggingEnabled;
-(BOOL)compileTimeStatisticsEnabled;
-(id)additionalCompilerArguments;
-(unsigned char)sourceLanguage;
-(void)setPreprocessorMacros:(id)arg1 ;
-(void)setGlBufferBindPoints:(BOOL)arg1 ;
-(void)setCompileTimeStatisticsEnabled:(BOOL)arg1 ;
-(void)setAdditionalCompilerArguments:(id)arg1 ;
-(void)setSourceLanguage:(unsigned char)arg1 ;
-(id)exportDictionary;
-(void)importDictionary:(id)arg1 ;
@end

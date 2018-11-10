#import <Foundation/Foundation.h>

@class SplatserviceObservable, SplatserviceKotlinUnit, SplatserviceMutableObservable, SplatserviceSplatService, SplatserviceSplatViewModel, SplatserviceSchedule, SplatserviceGameMode, SplatserviceGameModeCompanion, SplatserviceGameMode$serializer, SplatserviceMatch, SplatserviceStage, SplatserviceRule, SplatserviceMatchCompanion, SplatserviceMatch$serializer, SplatserviceRuleCompanion, SplatserviceRule$serializer, SplatserviceScheduleCompanion, SplatserviceSchedule$serializer, SplatserviceStageCompanion, SplatserviceStage$serializer, SplatserviceKotlinArray, SplatserviceKotlinx_serialization_runtime_nativeEnumDescriptor, SplatserviceKotlinx_serialization_runtime_nativeSerialKind, SplatserviceKotlinNothing, SplatserviceKotlinx_serialization_runtime_nativeUpdateMode, SplatserviceKotlinx_serialization_runtime_nativeSerialClassDescImpl, SplatserviceKotlinEnum;

@protocol SplatserviceKotlinx_serialization_runtime_nativeKSerializer, SplatserviceKotlinx_serialization_runtime_nativeSerializationStrategy, SplatserviceKotlinx_serialization_runtime_nativeEncoder, SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor, SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy, SplatserviceKotlinx_serialization_runtime_nativeDecoder, SplatserviceKotlinx_serialization_runtime_nativeCompositeEncoder, SplatserviceKotlinx_serialization_runtime_nativeSerialContext, SplatserviceKotlinAnnotation, SplatserviceKotlinx_serialization_runtime_nativeCompositeDecoder, SplatserviceKotlinIterator, SplatserviceKotlinx_serialization_runtime_nativeGeneratedSerializer, SplatserviceKotlinKClass, SplatserviceKotlinComparable, SplatserviceKotlinKDeclarationContainer, SplatserviceKotlinKAnnotatedElement, SplatserviceKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SplatserviceMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SplatserviceMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SplatserviceNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SplatserviceByte : SplatserviceNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SplatserviceUByte : SplatserviceNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SplatserviceShort : SplatserviceNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SplatserviceUShort : SplatserviceNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SplatserviceInt : SplatserviceNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SplatserviceUInt : SplatserviceNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SplatserviceLong : SplatserviceNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SplatserviceULong : SplatserviceNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SplatserviceFloat : SplatserviceNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SplatserviceDouble : SplatserviceNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SplatserviceBoolean : SplatserviceNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Observable")))
@interface SplatserviceObservable : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)observeCallback:(SplatserviceKotlinUnit *(^)(id _Nullable))callback __attribute__((swift_name("observe(callback:)")));
@property id _Nullable item;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutableObservable")))
@interface SplatserviceMutableObservable : SplatserviceObservable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("set(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplatService")))
@interface SplatserviceSplatService : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplatViewModel")))
@interface SplatserviceSplatViewModel : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)observeScheduleCallback:(SplatserviceKotlinUnit *(^)(SplatserviceSchedule * _Nullable))callback __attribute__((swift_name("observeSchedule(callback:)")));
- (void)fetchSchedule __attribute__((swift_name("fetchSchedule()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMode")))
@interface SplatserviceGameMode : KotlinBase
- (instancetype)initWithName:(NSString *)name key:(NSString *)key __attribute__((swift_name("init(name:key:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SplatserviceGameMode *)doCopyName:(NSString *)name key:(NSString *)key __attribute__((swift_name("doCopy(name:key:)")));
@property (readonly) NSString *name;
@property (readonly) NSString *key;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMode.Companion")))
@interface SplatserviceGameModeCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SplatserviceKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeOutput:(id<SplatserviceKotlinx_serialization_runtime_nativeEncoder>)output obj:(id _Nullable)obj __attribute__((swift_name("serialize(output:obj:)")));
@property (readonly) id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (id _Nullable)patchInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input old:(id _Nullable)old __attribute__((swift_name("patch(input:old:)")));
@property (readonly) id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeKSerializer <SplatserviceKotlinx_serialization_runtime_nativeSerializationStrategy, SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMode.$serializer")))
@interface SplatserviceGameMode$serializer : KotlinBase <SplatserviceKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SplatserviceGameMode *)deserializeInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (SplatserviceGameMode *)patchInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input old:(SplatserviceGameMode *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<SplatserviceKotlinx_serialization_runtime_nativeEncoder>)output obj:(SplatserviceGameMode *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Match")))
@interface SplatserviceMatch : KotlinBase
- (instancetype)initWithId:(int64_t)id startTime:(int64_t)startTime endTime:(int64_t)endTime stageA:(SplatserviceStage *)stageA stageB:(SplatserviceStage *)stageB rule:(SplatserviceRule *)rule gameMode:(SplatserviceGameMode *)gameMode __attribute__((swift_name("init(id:startTime:endTime:stageA:stageB:rule:gameMode:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (SplatserviceStage *)component4 __attribute__((swift_name("component4()")));
- (SplatserviceStage *)component5 __attribute__((swift_name("component5()")));
- (SplatserviceRule *)component6 __attribute__((swift_name("component6()")));
- (SplatserviceGameMode *)component7 __attribute__((swift_name("component7()")));
- (SplatserviceMatch *)doCopyId:(int64_t)id startTime:(int64_t)startTime endTime:(int64_t)endTime stageA:(SplatserviceStage *)stageA stageB:(SplatserviceStage *)stageB rule:(SplatserviceRule *)rule gameMode:(SplatserviceGameMode *)gameMode __attribute__((swift_name("doCopy(id:startTime:endTime:stageA:stageB:rule:gameMode:)")));
@property (readonly) int64_t id;
@property (readonly) int64_t startTime;
@property (readonly) int64_t endTime;
@property (readonly) SplatserviceStage *stageA;
@property (readonly) SplatserviceStage *stageB;
@property (readonly) SplatserviceRule *rule;
@property (readonly) SplatserviceGameMode *gameMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Match.Companion")))
@interface SplatserviceMatchCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SplatserviceKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Match.$serializer")))
@interface SplatserviceMatch$serializer : KotlinBase <SplatserviceKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SplatserviceMatch *)deserializeInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (SplatserviceMatch *)patchInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input old:(SplatserviceMatch *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<SplatserviceKotlinx_serialization_runtime_nativeEncoder>)output obj:(SplatserviceMatch *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rule")))
@interface SplatserviceRule : KotlinBase
- (instancetype)initWithName:(NSString *)name key:(NSString *)key multilineName:(NSString *)multilineName __attribute__((swift_name("init(name:key:multilineName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SplatserviceRule *)doCopyName:(NSString *)name key:(NSString *)key multilineName:(NSString *)multilineName __attribute__((swift_name("doCopy(name:key:multilineName:)")));
@property (readonly) NSString *name;
@property (readonly) NSString *key;
@property (readonly) NSString *multilineName;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rule.Companion")))
@interface SplatserviceRuleCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SplatserviceKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rule.$serializer")))
@interface SplatserviceRule$serializer : KotlinBase <SplatserviceKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SplatserviceRule *)deserializeInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (SplatserviceRule *)patchInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input old:(SplatserviceRule *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<SplatserviceKotlinx_serialization_runtime_nativeEncoder>)output obj:(SplatserviceRule *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Schedule")))
@interface SplatserviceSchedule : KotlinBase
- (instancetype)initWithGachi:(NSArray<SplatserviceMatch *> *)gachi league:(NSArray<SplatserviceMatch *> *)league regular:(NSArray<SplatserviceMatch *> *)regular __attribute__((swift_name("init(gachi:league:regular:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SplatserviceMatch *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SplatserviceMatch *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SplatserviceMatch *> *)component3 __attribute__((swift_name("component3()")));
- (SplatserviceSchedule *)doCopyGachi:(NSArray<SplatserviceMatch *> *)gachi league:(NSArray<SplatserviceMatch *> *)league regular:(NSArray<SplatserviceMatch *> *)regular __attribute__((swift_name("doCopy(gachi:league:regular:)")));
@property (readonly) NSArray<SplatserviceMatch *> *gachi;
@property (readonly) NSArray<SplatserviceMatch *> *league;
@property (readonly) NSArray<SplatserviceMatch *> *regular;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Schedule.Companion")))
@interface SplatserviceScheduleCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SplatserviceKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Schedule.$serializer")))
@interface SplatserviceSchedule$serializer : KotlinBase <SplatserviceKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SplatserviceSchedule *)deserializeInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (SplatserviceSchedule *)patchInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input old:(SplatserviceSchedule *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<SplatserviceKotlinx_serialization_runtime_nativeEncoder>)output obj:(SplatserviceSchedule *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stage")))
@interface SplatserviceStage : KotlinBase
- (instancetype)initWithImage:(NSString *)image name:(NSString *)name id:(NSString *)id __attribute__((swift_name("init(image:name:id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SplatserviceStage *)doCopyImage:(NSString *)image name:(NSString *)name id:(NSString *)id __attribute__((swift_name("doCopy(image:name:id:)")));
@property (readonly) NSString *image;
@property (readonly) NSString *name;
@property (readonly) NSString *id;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stage.Companion")))
@interface SplatserviceStageCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SplatserviceKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stage.$serializer")))
@interface SplatserviceStage$serializer : KotlinBase <SplatserviceKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SplatserviceStage *)deserializeInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (SplatserviceStage *)patchInput:(id<SplatserviceKotlinx_serialization_runtime_nativeDecoder>)input old:(SplatserviceStage *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<SplatserviceKotlinx_serialization_runtime_nativeEncoder>)output obj:(SplatserviceStage *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SplatserviceKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeEncoder
@required
- (id<SplatserviceKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(SplatserviceKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<SplatserviceKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(SplatserviceKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(SplatserviceKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSaver:(id<SplatserviceKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(saver:value:)")));
- (void)encodeSerializableValueSaver:(id<SplatserviceKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(saver:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<SplatserviceKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<SplatserviceKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SplatserviceKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) SplatserviceKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeDecoder
@required
- (id<SplatserviceKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(SplatserviceKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(SplatserviceKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SplatserviceKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueLoader:(id<SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeNullableSerializableValue(loader:)")));
- (id _Nullable)decodeSerializableValueLoader:(id<SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeSerializableValue(loader:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueLoader:(id<SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(loader:old:)")));
- (id _Nullable)updateSerializableValueLoader:(id<SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(loader:old:)")));
@property (readonly) id<SplatserviceKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) SplatserviceKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index saver:(id<SplatserviceKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:saver:value:)")));
- (void)encodeSerializableElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index saver:(id<SplatserviceKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:saver:value:)")));
- (void)encodeShortElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<SplatserviceKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SplatserviceKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SplatserviceInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SplatserviceKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface SplatserviceKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SplatserviceKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<SplatserviceKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<SplatserviceKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface SplatserviceKotlinx_serialization_runtime_nativeEnumDescriptor : SplatserviceKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(SplatserviceKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SplatserviceKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<SplatserviceKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<SplatserviceKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<SplatserviceKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SplatserviceKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface SplatserviceKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeNullableSerializableElement(desc:index:loader:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeSerializableElement(desc:index:loader:)")));
- (int16_t)decodeShortElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:loader:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<SplatserviceKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<SplatserviceKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:loader:old:)")));
@property (readonly) id<SplatserviceKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) SplatserviceKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SplatserviceKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SplatserviceKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SplatserviceKotlinEnum : KotlinBase <SplatserviceKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SplatserviceKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface SplatserviceKotlinx_serialization_runtime_nativeUpdateMode : SplatserviceKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SplatserviceKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) SplatserviceKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) SplatserviceKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SplatserviceKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SplatserviceKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol SplatserviceKotlinx_serialization_runtime_nativeGeneratedSerializer <SplatserviceKotlinx_serialization_runtime_nativeKSerializer>
@required
- (SplatserviceKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SplatserviceKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SplatserviceKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SplatserviceKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SplatserviceKotlinKClass <SplatserviceKotlinKDeclarationContainer, SplatserviceKotlinKAnnotatedElement, SplatserviceKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

NS_ASSUME_NONNULL_END

///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBAUTHPaperAccessError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperAccessError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBAUTHPaperAccessError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBAUTHPaperAccessErrorTag` enum type represents the possible tag states
/// with which the `DBAUTHPaperAccessError` union can exist.
typedef NS_ENUM(NSInteger, DBAUTHPaperAccessErrorTag) {
  /// Paper is disabled.
  DBAUTHPaperAccessErrorPaperDisabled,

  /// The provided user has not used Paper yet.
  DBAUTHPaperAccessErrorNotPaperUser,

  /// (no description).
  DBAUTHPaperAccessErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBAUTHPaperAccessErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "paper_disabled".
///
/// Description of the "paper_disabled" tag state: Paper is disabled.
///
/// @return An initialized instance.
///
- (instancetype)initWithPaperDisabled;

///
/// Initializes union class with tag state of "not_paper_user".
///
/// Description of the "not_paper_user" tag state: The provided user has not
/// used Paper yet.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotPaperUser;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "paper_disabled".
///
/// @return Whether the union's current tag state has value "paper_disabled".
///
- (BOOL)isPaperDisabled;

///
/// Retrieves whether the union's current tag state has value "not_paper_user".
///
/// @return Whether the union's current tag state has value "not_paper_user".
///
- (BOOL)isNotPaperUser;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBAUTHPaperAccessError` union.
///
@interface DBAUTHPaperAccessErrorSerializer : NSObject

///
/// Serializes `DBAUTHPaperAccessError` instances.
///
/// @param instance An instance of the `DBAUTHPaperAccessError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBAUTHPaperAccessError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBAUTHPaperAccessError *)instance;

///
/// Deserializes `DBAUTHPaperAccessError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBAUTHPaperAccessError` API object.
///
/// @return An instantiation of the `DBAUTHPaperAccessError` object.
///
+ (DBAUTHPaperAccessError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END

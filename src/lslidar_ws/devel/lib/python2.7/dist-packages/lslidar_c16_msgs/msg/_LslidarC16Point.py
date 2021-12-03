# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from lslidar_c16_msgs/LslidarC16Point.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class LslidarC16Point(genpy.Message):
  _md5sum = "4f9dbdcdc2cb5386e16b2ab1f416979d"
  _type = "lslidar_c16_msgs/LslidarC16Point"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Time when the point is captured
float32 time

# Converted distance in the sensor frame
float64 x
float64 y
float64 z

# Raw measurement from Leishen C16
float64 azimuth
float64 distance
float64 intensity
"""
  __slots__ = ['time','x','y','z','azimuth','distance','intensity']
  _slot_types = ['float32','float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       time,x,y,z,azimuth,distance,intensity

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LslidarC16Point, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.time is None:
        self.time = 0.
      if self.x is None:
        self.x = 0.
      if self.y is None:
        self.y = 0.
      if self.z is None:
        self.z = 0.
      if self.azimuth is None:
        self.azimuth = 0.
      if self.distance is None:
        self.distance = 0.
      if self.intensity is None:
        self.intensity = 0.
    else:
      self.time = 0.
      self.x = 0.
      self.y = 0.
      self.z = 0.
      self.azimuth = 0.
      self.distance = 0.
      self.intensity = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_f6d().pack(_x.time, _x.x, _x.y, _x.z, _x.azimuth, _x.distance, _x.intensity))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 52
      (_x.time, _x.x, _x.y, _x.z, _x.azimuth, _x.distance, _x.intensity,) = _get_struct_f6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_f6d().pack(_x.time, _x.x, _x.y, _x.z, _x.azimuth, _x.distance, _x.intensity))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 52
      (_x.time, _x.x, _x.y, _x.z, _x.azimuth, _x.distance, _x.intensity,) = _get_struct_f6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_f6d = None
def _get_struct_f6d():
    global _struct_f6d
    if _struct_f6d is None:
        _struct_f6d = struct.Struct("<f6d")
    return _struct_f6d
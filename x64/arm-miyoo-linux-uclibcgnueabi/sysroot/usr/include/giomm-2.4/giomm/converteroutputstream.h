// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!
#ifndef _GIOMM_CONVERTEROUTPUTSTREAM_H
#define _GIOMM_CONVERTEROUTPUTSTREAM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <giomm/filteroutputstream.h>
#include <giomm/pollableoutputstream.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GConverterOutputStream = struct _GConverterOutputStream;
using GConverterOutputStreamClass = struct _GConverterOutputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class ConverterOutputStream_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

class Converter;
class OutputStream;

/** ConverterOutputstream - Converter Output Stream.
 * Converter output stream implements OutputStream and allows conversion of
 * data of various types during reading.  ConverterOutputStream also implements
 * the PollableOutputStream interface.
 * @newin{2,34}
 */

class ConverterOutputStream : public FilterOutputStream,
                              public PollableOutputStream
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ConverterOutputStream;
  using CppClassType = ConverterOutputStream_Class;
  using BaseObjectType = GConverterOutputStream;
  using BaseClassType = GConverterOutputStreamClass;

  // noncopyable
  ConverterOutputStream(const ConverterOutputStream&) = delete;
  ConverterOutputStream& operator=(const ConverterOutputStream&) = delete;

private:  friend class ConverterOutputStream_Class;
  static CppClassType converteroutputstream_class_;

protected:
  explicit ConverterOutputStream(const Glib::ConstructParams& construct_params);
  explicit ConverterOutputStream(GConverterOutputStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ConverterOutputStream(ConverterOutputStream&& src) noexcept;
  ConverterOutputStream& operator=(ConverterOutputStream&& src) noexcept;

  ~ConverterOutputStream() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GConverterOutputStream*       gobj()       { return reinterpret_cast<GConverterOutputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GConverterOutputStream* gobj() const { return reinterpret_cast<GConverterOutputStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GConverterOutputStream* gobj_copy();

private:

  
protected:
    explicit ConverterOutputStream(const Glib::RefPtr<OutputStream>& base_stream, const Glib::RefPtr<Converter>& converter);


public:
  
  /** Creates a new converter output stream for the @a base_stream.
   * 
   * @param base_stream A OutputStream.
   * @param converter A Converter.
   * @return A new OutputStream.
   */

  
  static Glib::RefPtr<ConverterOutputStream> create(const Glib::RefPtr<OutputStream>& base_stream, const Glib::RefPtr<Converter>& converter);


  // The C function returns an unreffed private member.
  
  /** Gets the Converter that is used by @a converter_stream.
   * 
   * @newin{2,24}
   * 
   * @return The converter of the converter output stream.
   */
  Glib::RefPtr<Converter> get_converter();
  
  /** Gets the Converter that is used by @a converter_stream.
   * 
   * @newin{2,24}
   * 
   * @return The converter of the converter output stream.
   */
  Glib::RefPtr<const Converter> get_converter() const;

  /** The converter object.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Converter> > property_converter() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::ConverterOutputStream
   */
  Glib::RefPtr<Gio::ConverterOutputStream> wrap(GConverterOutputStream* object, bool take_copy = false);
}


#endif /* _GIOMM_CONVERTEROUTPUTSTREAM_H */
